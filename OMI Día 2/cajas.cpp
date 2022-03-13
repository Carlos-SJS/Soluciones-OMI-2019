#include<bits/stdc++.h>
using namespace std;

int towers[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, t=0;
    cin >> n;

    int x[n];
    for(int i=0; i<n; i++){
        cin >> x[i];
    }

    sort(x,x+n);

    bool rp;
    int a=0,lt=-1;

    int owo;

    for(int i=0; i<n; i++){
        rp=1;
        //a=0;
        while(rp&&a<t&&t>0){
            if(towers[a]<=x[i]){
                towers[a]++;
                rp=0;
            }else{
                a++;
            }

        }
        if(rp==1){
            if(lt!=x[i]){
                owo=0;
            }
            lt=x[i];

            while(rp&&owo<a&&t>0){
                if(towers[owo]<=x[i]){
                    towers[owo]++;
                    rp=0;
                }else{
                    owo++;
                }

            }
            if(rp==1){
                towers[t]=1;
                t++;
            }

        }
    }

    cout << t;
}
