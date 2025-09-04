#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, x, res;
    cin >> t;
    vector<ll> n(4,0);
    fore(i,0,t){
        cin >> x;
        n[x-1]++;
    }
    res = n[3] + n[2] + (n[1]+1)/2;
    if(n[0]-n[2]-(n[1]%2)*2>0){
        res+=(n[0]-n[2]-(n[1]%2)*2+3)/4;
    }
    cout << res++ << "\n";
}