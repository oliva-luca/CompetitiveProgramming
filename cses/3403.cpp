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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ii> b(m),r(n+1);
    for(auto& i:a)cin>>i;
    ll t,c = 0;
    for(auto& i:b){
        cin>>t;
        i={t,c};
        c++;
    }
    cout << "\n";
    fore(i,0,n){
        ll x=-1,y=-1;
        fore(j,0,SZ(b)){
            if(a[i]==b[j].fst){
                x=j;
                break;
            }
        }
        if(x!=-1){
            dfore(j,i,0){
                if(r[j].fst<x&&r[j].snd>m)
            }
        }
    }
}