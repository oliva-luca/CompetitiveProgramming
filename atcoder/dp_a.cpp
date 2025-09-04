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
    vector<ll> a(n), b(n);
    for(auto& i:a)cin >> i;
    b[1]=abs(a[0]-a[1]);
    fore(i,2,n){
        b[i]=min(abs(a[i-1]-a[i])+b[i-1],abs(a[i-2]-a[i])+b[i-2]);
    }
    cout << b[n-1] <<"\n";
}