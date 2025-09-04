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
    ll n,cb=0,ce=0,k,x,y;
    cin >> n;
    vector<ll> a(n);
    for(auto& i:a)cin >> i;
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout << 0 <<" "<< n*(n-1)/2 <<"\n";
        return 0;
    }
    x=0;
    y=n-1;
    while(y>=x){
        k=(x+y)/2;
        if(a[k]==a[0]){
            cb=k+1;
            x=k+1;
        }
        else y=k-1;
    }
    x=0;
    y=n-1;
    while(y>=x){
        k=(x+y)/2;
        if(a[k]==a[n-1]){
            ce=n-k;
            y=k-1;
        }
        else x=k+1;
    }
    cout << a[n-1]-a[0] <<" "<< cb*ce <<"\n";
}