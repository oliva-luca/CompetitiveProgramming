#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
#define subMod(a,b,m) ((a-b)%m+m)%m
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll n;
    cin >> n;
    vector<char> a(n);
    for(auto& i:a)cin>>i;
    set<char> r;
    fore(i,0,n){
        r.insert(tolower(a[i]));
    }
    if(SZ(r)>=26)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}