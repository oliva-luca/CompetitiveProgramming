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
    ll n,s=0,m=0,res=LONG_LONG_MAX;
    cin >> n;
    vector<ll> a(n);
    for(auto& i:a){
        cin >> i;
        s+=i;
        m=max(m,i);
    }
    ll l=m,r=s,p;
    while(l<=r){
        ll c=0;
        p=(l+r)/2;
        fore(i,0,n){
            c+=p-a[i];
        }
        if(c>=p){
            res=min(res,p);
            r=p-1;
        }
        else l=p+1;
    }
    cout <<res<< "\n";
}