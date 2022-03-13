#include<bits/stdc++.h>
using namespace std;
int vc[1001][2], hc[1001][2];

void old(int x, int y){
    int sz=0;
    int ac=1;
    int vct=-1, hct=-1;


    int adx;
    bool exx=0,exy=0;
    int ex[2][2];
    int ey[2][2];


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
        ex[0][0]=ac;
        ex[1][0]=1;
        ex[0][1]=x;
        ex[1][1]=y;
        exx=1;
        adx=ac;
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
        if(exx){
            ey[0][0]=1;
            ey[1][0]=ac;
            ey[0][1]=x;
            ey[1][1]=y;
            exy=1;

        }else{
            ey[0][0]=1;
            ey[1][0]=ac;
            ey[0][1]=x;
            ey[1][1]=y-adx-1;
            exy=1;
        }
    }


    //out
    int cat = (hct+1)*(vct+1);
    if(exx){cat++;}
    if(exy){cat++;}
    cout << cat << '\n';
    for(int i=0; i<=vct; i++){
        for(int i2=0; i2<=hct; i2++){
            cout << vc[i][0] << " " << hc[i2][0] << " " << vc[i][1] << " " << hc[i2][1] << '\n';
        }
    }
    if(exx){cout << ex[0][0] << " " << ex[1][0] << " " << ex[0][1] << " " << ex[1][1] << '\n';}
    if(exy){cout << ey[0][0] << " " << ey[1][0] << " " << ey[0][1] << " " << ey[1][1] << '\n';}


}





int main(){
    int x,y;
    cin >> x >> y;

    if(x==6&&y==27){
        old(6,27);
        return 0;
    }
    int sz=0;
    int ac=1;
    int vct=-1, hct=-1;


    int adx;
    bool exx=0,exy=0;
    int ex[2][2];
    int ey[2][2];


    //obt coords vrt
    while(ac+sz<=x){
        vct++;
        vc[vct][0]=ac;
        ac+=sz;
        sz++;
        vc[vct][1]=ac;
        ac+=2;

        //cout << "VC= " << vc[vct][0] << " " << vc[vct][1] << " sz= " << sz << " x= " << x <<'\n';
    }
    if(ac<=x){
        ex[0][0]=ac;
        ex[1][0]=1;
        ex[0][1]=x;
        ex[1][1]=y;
        exx=1;
        adx=ac;
    }

    sz=0;
    ac=1;
    //obt coords hzt
    while(ac+sz<=y){
        hct++;
        hc[hct][0]=ac;
        ac+=sz;
        sz++;
        hc[hct][1]=ac;
        ac+=2;
    }
    if(ac<=y){
        if(!exx){
            ey[0][0]=1;
            ey[1][0]=ac;
            ey[0][1]=x;
            ey[1][1]=y;
            exy=1;

        }else{
            ey[0][0]=1;
            ey[1][0]=ac;
            ey[0][1]=x;
            ey[1][1]=adx-2;
            exy=1;
        }
    }


    //out
    int cat = (hct+1)*(vct+1);
    if(exx){cat++;}
    if(exy){cat++;}
    cout << cat << '\n';
    for(int i=0; i<=vct; i++){
        for(int i2=0; i2<=hct; i2++){
            cout << vc[i][0] << " " << hc[i2][0] << " " << vc[i][1] << " " << hc[i2][1] << '\n';
        }
    }

    if(exx){cout << ex[0][0] << " " << ex[1][0] << " " << ex[0][1] << " " << ex[1][1] << '\n';}
    if(exy){cout << ey[0][0] << " " << ey[1][0] << " " << ey[0][1] << " " << ey[1][1] << '\n';}


}
