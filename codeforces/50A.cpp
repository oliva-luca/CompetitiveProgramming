#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll m = 1, n =1, res = 0;
    cin >> n >> m;
    res = (n/2)*(m)+(n%2)*(m/2);
    cout << res << "\n";
}