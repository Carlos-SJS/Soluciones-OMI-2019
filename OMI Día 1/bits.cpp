#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,ka,kb;
    cin >> n >> ka>>kb;
    long long x,b=0,m,c,rc=0,tp;
    int arr1[200],arr2[200];
    if(ka<kb){
        tp=ka;
        ka=kb;
        kb=ka;
    }
    if(ka==kb){
      for(int i=0; i<pow(2, n); i++){
            //m=1;
            x=i;
            //b=0;
            c=0;
            while((x/2)>1){
                //b+=(x%2)*m;
                c+=x%2;
                x/=2;
                //m*=10;
            }
            //b+=(x%2)*m;
            c+=x%2;
            //m*=10;
            //b+=(x/2)*m;
            c+=x/2;
            //cout << "with " << c <<'\n';
            //cout << c << '\n';
            if(c==ka){rc++;}
        }
        cout << rc*(rc-1);
    }
    else if(ka==n){cout << 0;}
    else{
        for(int i=0; i<pow(2, n); i++){
            m=1;
            x=i;
            b=0;
            c=0;

            while((x/2)>1){
                b+=(x%2)*m;
                c+=x%2;
                x/=2;
                m*=10;
            }
            b+=(x%2)*m;
            c+=x%2;
            m*=10;
            b+=(x/2)*m;
            c+=x/2;
            if(c==kb){arr1[i];}
        }
    }
}

