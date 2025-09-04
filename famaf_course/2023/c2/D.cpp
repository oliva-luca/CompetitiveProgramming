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
    ll n,m,t;
    cin >> n;
    vector<ll> a(n+1);
    a[0]=0;
    fore(i,1,n+1){
        cin >> t;
        a[i]=a[i-1]+t;
    }
    cin >> m;
    vector<ll> b(m);
    for(auto& i:b)cin>>i;
    fore(i,0,m){
        ll l=1,r=n,p;
        while(l<=r){
            p=(r+l)/2;
            if(a[p]>=b[i]&&a[p-1]<b[i]){
                break;
            }
            if(a[p]>b[i])r=p-1;
            else l=p+1;
        }
        cout << p << "\n";
    }
}