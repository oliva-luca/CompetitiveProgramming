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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto& i:a)cin >> i;
        sort(a.begin(),a.end());
        ll l=a[0]+1,r=a[n]+n,p,res=0;
        while(r>=l){
            ll x=n,i=0,c=0;
            p=(l+r)/2;
            while(i<n){
                if(a[i]+x==p){
                    x--;
                    i++;
                    c++;
                } 
                else if(a[i]+x<p){
                    i++;
                } else {
                    x--;
                }
            }
            if(c>r)
            res=max(c,r);
        }
        cout <<res<< "\n";
        t--;
    }
}