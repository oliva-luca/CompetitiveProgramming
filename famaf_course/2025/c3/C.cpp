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
    ll n,r=0;
    vector<ll> a(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    fore(i,0,3){
        if(a[i]<=n){
            r++;
            n-=a[i];
        }
    }
    cout << r << "\n";
}