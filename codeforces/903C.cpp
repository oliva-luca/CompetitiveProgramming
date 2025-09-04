#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, temp;
    cin >> t;
    multiset<ll> s;
    fore(i,0,t){
        cin >> temp;
        s.insert(temp);
    }
    
    fore(i,0,t){
        auto x = upper_bound(s.begin(),s.end(),*s.begin());
        if(x==s.end())break;
        // cout << *x << "/n";
        ll c1 = s.count(*s.begin()), c2 = s.count(*x);
        s.erase(*s.begin());
        if(c1>c2){
            fore(j,0,c1-c2){
                s.insert(*x);
            }
        }
    }
    cout << s.size() << "\n";
}