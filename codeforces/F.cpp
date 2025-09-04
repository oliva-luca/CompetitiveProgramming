#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, n, m, k;
    cin >> t;
    while(t){
        cin >> n >> m >> k; 
        vector<ll> v;
        fore(i,1,m+1){
            v.push_back(i);
        }
        fore(i,1,n+1){
            fore(j,0,m){
                cout << v[(i+j)%m] << " ";
            }
            cout << "\n";
        }
        t--;
    }
}