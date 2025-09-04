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
    ll n;
    char x;
    cin >> n;
    vector<ll> a(n*n,-1);
    fore(i,0,n*n){
        cin >> x;
        if(x=='*')a[i]=0;
        else if(i/n==0)a[i]=(a[i-1]!=0);
        else if(i%n==0)a[i]=(a[i-n]!=0||i==0);
    }
    fore(i,0,n*n){
        if(a[i]==-1)a[i]=(a[i-n]+a[i-1])%(ll)(1e9+7);
    }
    cout << a[(n*n)-1]<<"\n";
}