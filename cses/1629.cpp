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
    ll n,l=0,res=0;
    cin >> n;
    vector<ii> a(n);
    for(auto& i:a)cin >> i.snd >> i.fst;
    sort(a.begin(),a.end());
    fore(i,0,n){
        if(a[i].snd>=l){
            l=a[i].fst;
            res++;
        }
    }
    cout << res <<"\n";
}