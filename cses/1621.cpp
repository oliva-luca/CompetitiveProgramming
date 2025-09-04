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
    ll t,r=0;
    cin >> t;
    set<ll> a;
    while(t){
        ll x;
        cin >> x;
        if(a.find(x)==a.end()){
            r++;
            a.insert(x);
        }
        t--;
    }
    cout << r << "\n";
}