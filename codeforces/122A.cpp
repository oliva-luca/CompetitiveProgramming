#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    vector<ll> n(3);
    ll res;
    cin >> n[0] >> n[1] >> n[2];
    if(n[0]==1||n[1]==1||n[2]==1){
        res = max(max(n[0]*(n[1]+n[2]),(n[0]+n[1])*n[2]),n[0]+n[1]+n[2]);
    }else{
        res = n[0]*n[1]*n[2];
    }
    cout << res << "\n";
}