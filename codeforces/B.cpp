#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, n, m, l, r;
    cin >> t;
    string s,p;
    while(t){
        cin >> n >> m >> l >> r;
        n -= m;
        fore(i,0,n){
            if(l==0){
                r--;
            } else {
                l++;
            }
        }
        cout << l << " " << r << "\n";
        t--;
    }
}