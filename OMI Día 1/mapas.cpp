#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    bool n=1,r1=1,r2=1,r3=1;
    //bool f1=1,f2=1;

    //para casos con flip y giro
    bool f1n=1,f1r1=1,f1r2=1,f1r3=1;
    bool f2n=1,f2r1=1,f2r2=1,f2r3=1;
    char fmp[x][x];

    char mp1[x][x], mp2[x][x];

    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            cin >> mp1[i][i2];
        }
    }

    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            cin >> mp2[i][i2];
            if(mp1[i][i2]!=mp2[i][i2]){n=0;}
            if(mp1[x-1-i][x-1-i2]!=mp2[i][i2]){r2=0;}
        }
    }


    for(int i=x-1; i>=0; i--){
        for (int i2=0; i2<x; i2++){

            if(mp1[i2][i]!=mp2[x-1-i][i2]){r1=0;}
            if(mp1[x-1-i2][x-1-i]!=mp2[x-1-i][i2]){r3=0;}
        }
    }

    /*for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            if(mp1[x-1-i][i2]!=mp2[i][i2]){f1=0;}
            if(mp1[i][x-1-i2]!=mp2[i][i2]){f2=0;}
        }
    }*/


    //flip 1
    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            fmp[i][i2]=mp1[x-1-i][i2];
        }
    }

    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            if(fmp[i][i2]!=mp2[i][i2]){f1n=0;}
            if(fmp[x-1-i][x-1-i2]!=mp2[i][i2]){f1r2=0;}
        }
    }


    for(int i=x-1; i>=0; i--){
        for (int i2=0; i2<x; i2++){

            if(fmp[i2][i]!=mp2[x-1-i][i2]){f1r1=0;}
            if(fmp[x-1-i2][x-1-i]!=mp2[x-1-i][i2]){f1r3=0;}
        }
    }


    //flip 2
    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            fmp[i][i2]=mp1[i][x-1-i2];
        }
    }

    for(int i=0; i<x; i++){
        for (int i2=0; i2<x; i2++){
            if(fmp[i][i2]!=mp2[i][i2]){f2n=0;}
            if(fmp[x-1-i][x-1-i2]!=mp2[i][i2]){f2r2=0;}
        }
    }


    for(int i=x-1; i>=0; i--){
        for (int i2=0; i2<x; i2++){

            if(fmp[i2][i]!=mp2[x-1-i][i2]){f2r1=0;}
            if(fmp[x-1-i2][x-1-i]!=mp2[x-1-i][i2]){f2r3=0;}
        }
    }



    if(n||r1||r2||r3||f1n||f1r1||f1r2||f1r3||f2n||f2r1||f2r2||f2r3){cout << "IGUALES";}
    else{cout << "DIFERENTES";}


}
