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

ll dp[100005];
vector<vector<ll>> a;

ll dfs(ll x){
    ll& res=dp[x]=0;
    for(auto i:a[x])res+=dfs(i)+1;
    return res;
}

int main(){
    FIN;
    ll n;
    cin >> n;
    a.resize(n+1);
    fore(i,2,n+1){
        ll b;
        cin >> b;
        a[b].push_back(i);
    }
    dfs(1);
    fore(i,1,n+1)cout << dp[i] << " ";
    cout << "\n";
}