#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll n,m,prev;
    cin >> n;
    vector<ll> a(n);
    fore(i,0,n){
        cin >> a[i];
    }
    m=a[0];
    prev=a[0];
    fore(i,1,n){
        prev=max(prev+a[i],a[i]);
        m=max(prev,m);
    }
    cout << m << "\n";
}