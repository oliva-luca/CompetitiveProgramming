#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

int main(){
    ll t, fe=-1, fu=-1, c=0;
    cin >> t;
    vector<ll> a(t,0);
    input(a);

    fore(i,0,t){
        if(a[i]%2==0){
            c++;
            if(fe==-1)fe=i+1;
        } else {
            c--;
            if(fu==-1)fu=i+1;
        }
    }
    if(c>0){
        cout << fu << "\n";
    } else {
        cout << fe << "\n";
    }
}