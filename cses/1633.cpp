#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    a[0]=1;
    fore(i,1,n+1){
        ll j=1;
        while(j<=6&&i-j>=0){
            a[i]=(a[i-j]+a[i])%(ll)(1e9+7);
            j++;
        }
    }
    cout << a[n]<<"\n";
}