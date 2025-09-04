#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, n, temp;
    set<ll> s;
    cin >> t;
    fore(i,0,2){
        cin >> n;
        fore(j,0,n){
            cin >> temp;
            s.insert(temp);
        }
    }
    if((ll)s.size()==t){
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n"; 
    }
}