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

ll n,k;
ll dp[100005];
ll h[100005];

ll f(ll x){
    ll&res=dp[x];
    if(res>=0)return res;
    if(x==n-1)return 0;
    if(x==n-2)return abs(h[n-1]-h[n-2]);
    res=LONG_LONG_MAX;
    for(ll i=1;i<=k&&x+i<n;i++){
        res=min(res,f(x+i)+abs(h[x+i]-h[x]));
    }
    return res;
}

int main(){
    FIN;
    cin >> n >>k;
    fore(i,0,n)cin>>h[i];
    memset(dp,-1,sizeof(dp));
    cout << f(0) <<"\n";
}