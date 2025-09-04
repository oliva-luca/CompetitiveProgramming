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

ll d[1005][1005];
bool vis[1005][1005];
ll n,m;

ll bfs(ll i,ll j){
    if(i<0 || j<0) return 0;
    if(i==n || j==m) return 0;
    if(vis[i][j]==1) return 0;
    vis[i][j]=1;
    if(d[i][j]==0) return 0;
    ll &res = d[i][j];
    return res + bfs(i+1,j) + bfs(i-1,j) + bfs(i,j+1) + bfs(i,j-1);
}

int main(){
    FIN;
    ll t;
    cin >> t;
    while(t){
        memset(vis,0,sizeof(vis));
        cin >> n >> m;
        fore(i,0,n) fore(j,0,m) cin >> d[i][j];
        ll res=0;
        fore(i,0,n){
            fore(j,0,m){
                res = max(res,bfs(i,j));
            }
        }
        cout << res << "\n";
        t--;
    }
}