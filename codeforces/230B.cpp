#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

bool isPrime(ll x){
    bool res = true;
    for(ll j=2;j*j<=x;++j){
        res &= (x%j!=0);
    }
    return res;
}


int main(){
    ll t,i;
    cin >> t;
    ll a[t];
    input(a);

    fore(i,0,t){
        ll s = sqrt(a[i]);
        if(s*s==a[i]&& a[i]>1 &&isPrime(s)){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
}