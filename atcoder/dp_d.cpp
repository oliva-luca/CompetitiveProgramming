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
ll dp[100005][3];
ii h[100005];

ll f(ll x, ll y){
    ll&res=dp[x][y];
    if(res>=0)return res;
    if(x==0)return h[0][y];
    res=max(f(x-1,(y+1)%3),f(x-1,(y+2)%3))+h[x][y];
    return res;
}

int main(){
    FIN;
    cin >> n >> k;
    fore(i,0,n)cin>>h[i].fst>>h[i].snd;
    memset(dp,-1,sizeof(dp));
    cout << max(f(n-1,0),max(f(n-1,1),f(n-1,2))) <<"\n";
}