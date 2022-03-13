#include<bits/stdc++.h>
using namespace std;

int vc[1001][2], hc[1001][2];

int main(){
    int x,y;
    cin >> x >> y;
    int sz=0;
    int ac=1;
    int vct=-1, hct=-1;


    //obt coords vrt
    while(ac+sz<x){
        vct++;
        vc[vct][0]=ac;
        ac+=sz;
        sz++;
        vc[vct][1]=ac;
        ac+=2;

        //cout << "VC= " << vc[vct][0] << " " << vc[vct][1] << " sz= " << sz << " x= " << x <<'\n';
    }
    if(ac<=x){
        vct++;
        vc[vct][0]=ac;
        vc[vct][1]=x;
    }

    sz=0;
    ac=1;
    //obt coords hzt
    while(ac+sz<y){
        hct++;
        hc[hct][0]=ac;
        ac+=sz;
        sz++;
        hc[hct][1]=ac;
        ac+=2;
    }
    if(ac<=y){
        hct++;
        hc[hct][0]=ac;
        hc[hct][1]=y;
    }


    //out
    int cat = (hct+1)*(vct+1);
    cout << cat << '\n';
    for(int i=0; i<=vct; i++){
        for(int i2=0; i2<=hct; i2++){
            cout << vc[i][0] << " " << hc[i2][0] << " " << vc[i][1] << " " << hc[i2][1] << '\n';
        }
    }


}
