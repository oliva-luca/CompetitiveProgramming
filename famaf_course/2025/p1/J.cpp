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

ll dp[100005][10][10];
ll m;
string s,l,r;

bool f(ll x, ll y, ll z){
    if(z>r[y]) return 0;
    if(y==m) return 1;
    if(x==SZ(s)) return 1;
    ll &res = dp[x][y][z];
    if(res!=-1) return res;
    if(y==m-1&&x==SZ(s)-1&&z!=s[x]) res = 1;
    else res = (f(x+1,y,z) && f(x+1,y+1,l[y+1]) && z!=s[x])||f(x,y,z+1);
    return res;
}

int main(){
    FIN;
    ll t;
    cin >> t;
    while(t){
        memset(dp,-1,sizeof(dp));
        cin >> s >> m >> l >> r;
        if(f(0,0,l[0])){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        t--;
    }
}