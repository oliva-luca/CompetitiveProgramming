#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, x, res=0,high=0;
    cin >> t;
    map<ll,ll> m;
    fore(i,0,t){
        cin >> x;
        m[x]+=x;
        high=max(high,x);
    }
    vector<ll> a;
    a.push_back(m[0]);
    a.push_back(m[1]);
    res=max(a[0],a[1]);
    fore(i,2,high+1){
        a.push_back(max(m[i]+a[i-2],m[i]+(i>2?1:0)*a[i-3]));
        res=max(a[i],res);
    }
    cout << res << "\n";
}