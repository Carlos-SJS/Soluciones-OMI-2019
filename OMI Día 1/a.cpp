#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,ka,kb;
    cin >> n >> ka>>kb;
    long long x,b=0,m,c,rc=0,tp,fn=1,fk=1;
    int arr1[200],arr2[200];
    if(ka==kb){
        cout << "a";
        for(int i=1; i<n; i++){
            fn*=i;
        }
        for(int i=1; i<kb; i++){
            fk*=i;
        }
        n=(fn*n)/(fn*fk);
        cout << n*(n-1);
    }
    else{cout << 0;}
}
