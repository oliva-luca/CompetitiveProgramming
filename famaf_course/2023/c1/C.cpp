#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t,h,m;
    cin >> t;
    string a,b;
    while(t){
        cin >> h >> m;
        cout << (23-h)*60+60-m << "\n";
        t--;
    }
}