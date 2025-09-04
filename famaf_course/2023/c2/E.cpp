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
    ll t,n;
    cin >> t;
    while(t){
        cin >> n;
        vector<ii>a;
        for(auto& i:a){
            cin >> i.fst >> i.snd;
        }
        fore(i,0,n){
            p=(l+r)/2;
            cs=a[p].fst;
            ci=a[p].snd;
            ll l=0,r=n-1,p,r=0,cs,ci;
            while(l<=r){}
        }
        t--;
    }
    cout << "\n";
}