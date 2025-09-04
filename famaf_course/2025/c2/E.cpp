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
    ll t;
    cin >> t;
    while(t){
        ll n,m=0;
        cin >> n ;
        vector<ii> a(n);
        for(auto& i:a) {
            cin >> i.fst >> i.snd;
            m=max(m,i.snd);
        }
        ll x,l=0,r=m,res;
        while(l<=r){
            bool b = true;
            x=(l+r)/2;
            ll pl=0,pr=0;
            fore(i,0,n){
                if(pl-x>a[i].snd||pr+x<a[i].fst){
                    b=false;
                    break;
                }
                if(pl>a[i].fst)pl=max(pl-x,a[i].fst);
                else pl=a[i].fst;
                if(pr<a[i].snd)pr=min(pr+x,a[i].snd);
                else pr=a[i].snd;
            }
            if(b){
                r=x-1;
                res=x;
            }
            else l=x+1;
        }
        cout << res <<"\n";
        t--;
    }
}