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
    ll n,h,b,r=0;
    cin >> n;
    vector<ii> a(100,{0,0});
    fore(i,0,n){
        cin >> h >> b;
        a[h-1].fst++;
        a[b-1].snd++; 
    }
    fore(i,0,100){
        r+=a[i].fst*a[i].snd;
    }
    cout <<r<< "\n";
}