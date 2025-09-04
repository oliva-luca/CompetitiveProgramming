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
    ll t,r=0;
    vector<ll> a(5);
    a={1,5,10,20,100};
    cin >> t;
    while(t>0){
        ll x=*(upper_bound(a.begin(),a.end(),t)-1);
        t-=x;
        r++;
    }
    cout << r <<"\n";
}