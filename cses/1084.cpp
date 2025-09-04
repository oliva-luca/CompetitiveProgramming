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
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n),b(m);
    for(auto& i:a)cin>>i;
    for(auto& i:b)cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll j=0,res=0;
    fore(i,0,n){
        while(a[i]<=b[j]+k&&j<m){
            if(abs(a[i]-b[j])<=k){
                j++;
                res++;
                break;
            }
            j++;
        }
    }
    cout << res <<"\n";
}