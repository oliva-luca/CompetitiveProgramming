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

ll dp[105][105];
ll a[105][105];

ll f(ll x,ll y){
    ll&res=dp[x][y];
    if(res>=0) return res;
    if(x==0&&y==0) return a[0][0];
    if(x==0)res = f(x,y-1)+a[x][y];
    else if(y==0)res = f(x-1,y)+a[x][y];
    else res = min(f(x,y-1),f(x-1,y))+a[x][y];
    return res;
}

int main(){
    FIN;
    ll t;
    cin >> t;
    while(t){
        ll n,m,k,t;
        cin >> n >> m >> k;
        fore(i,0,n*m){
            cin>>t;
            a[i/m][i%m]=t;
        }
        if(f(n-1,m-1))
        t--;
    }
}