#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll n,q,l,r;
    cin >> n >> q;
    string a;
    vector<ll> x(n);
    cin >> a;
    x[0]=(int)a[0]-96;
    fore(i,1,n){
        x[i]=(int)a[i]-96+x[i-1];
    }
    while(q){
        cin >> l >> r;
        cout << x[r-1]-(l==1?0:x[l-2]) << "\n";
        q--;
    }
}