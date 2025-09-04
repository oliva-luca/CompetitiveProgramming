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
    ll t;
    cin >> t;
    while(t){
        ll n,m;
        cin >> n >> m;
        vector<ll> d(n);
        fore(i,0,m*2){
            ll temp;
            cin >> temp;
            d[temp-1]++;
        }
        ll l=0;
        fore(i,0,n){
            if(d[i]==1){
                l++;
            }
        }
        ll x,y;
        x=n-l-1;
        y=l/x; 
        cout << x <<" "<< y << "\n";
        t--;
    }
}