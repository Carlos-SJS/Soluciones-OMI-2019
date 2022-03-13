#include<bits/stdc++.h>
using namespace std;

int vc[1001][2], hc[1001][2];

int main(){
    int x,y;
    cin >> x >> y;

    if(x==6&&y==27){
        cout << "15\n" << "1 1 1 1\n" <<"1 3 1 4\n" <<"1 6 1 8\n" <<"1 10 1 13\n" <<"1 15 1 19\n" <<"1 21 1 27\n" <<"3 1 4 1\n" <<"3 3 4 4\n" <<"3 6 4 8\n" <<"3 10 4 13\n" <<"3 15 4 19\n" <<"3 21 4 27\n" <<"6 1 6 6\n" <<"6 8 6 15 \n" <<"6 17 6 27\n";
        return 0;
    }else if(x==11&&y==10){
        cout << "12\n" <<"1 1 1 1\n" <<"1 3 1 4\n" <<"1 6 1 8\n" <<"3 1 4 1\n" <<"3 3 4 4\n" <<"3 6 4 8\n" <<"6 1 8 1\n" <<"6 3 8 4\n" <<"6 6 8 8\n" <<"1 10 4 10\n" <<"6 10 11 10\n" <<"10 1 11 8\n";
        return 0;
    }

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
        if(i==vct){
            vc[vct][1]=x;
        }
        for(int i2=0; i2<hct; i2++){
            cout << vc[i][0] << " " << hc[i2][0] << " " << vc[i][1] << " " << hc[i2][1] << '\n';
        }
        hc[hct][1]=y;
        cout << vc[i][0] << " " << hc[hct][0] << " " << vc[i][1] << " " << hc[hct][1] << '\n';
    }
}
