#include <bits/stdc++.h>
using namespace std;

queue<int> xq;
queue <int> yq;

short int dirx[]={-1,0,+1,-1,+1,-1,0,+1};
short int diry[]={+1,+1,+1,0,0,-1,-1,-1};
int mp[1002][1002], d[1002][1002];

bool valid(int x, int y){
    if(mp[y][x]==1){return 0;}
    if(x<0||x>=1000){return 0;}
    if(y<0||y>=1000){return 0;}
    return 1;
}


void bfs(){
    int x,y;
    while(!xq.empty()){
        x=xq.front();
        y=yq.front();
        xq.pop();
        yq.pop();
        for(int i=0; i<8; i++){
            if(valid(x+dirx[i],y+diry[i])){
                mp[y+diry[i]][x+dirx[i]]=1;
                d[y+diry[i]][x+dirx[i]]=d[y][x]+1;
                xq.push(x+dirx[i]);
                yq.push(y+diry[i]);
            }

        }

    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,q;
    cin >> n >> q;
    int x,y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        xq.push(x);
        yq.push(y);
        mp[y][x]=1;
    }

    bfs();

    for(int i=0; i<q; i++){
        cin >> x >> y;
        cout << d[y][x] << '\n';
    }
}
