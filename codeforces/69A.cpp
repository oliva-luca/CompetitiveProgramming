#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    int v[3]={0,0,0}, temp[3];
    cin >> t;
    for(ll i=0; i<t; i++){
        cin >> temp[0] >> temp[1] >> temp[2];
        v[0]+=temp[0];
        v[1]+=temp[1];
        v[2]+=temp[2];
    }

    if(!(v[0]||v[1]||v[2])){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
