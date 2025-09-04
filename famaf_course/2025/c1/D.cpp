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
    ll n,k,res;
    cin >> n >> k;
    char a;
    set <char> s;
    map<char,ll> m;
    fore(i,0,n){
        cin >> a;
        if((int)a<65+k){
            s.insert(a);
            m[a]++;
        }
    }
    if(SZ(s)!=k){
      cout << 0 << "\n";
      return 0; 
    }
    for(auto i : s){
        res=min(res,m[i]);
    }
    cout << res * k << "\n";
}