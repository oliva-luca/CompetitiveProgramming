#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll n,m,temp;
    cin >> n >> m;
    deque<set<ll>> a;
    bool found;
    fore(i,0,m){
        found = false;
        cin >> temp;
        fore(i,0,a.size()){
            if(a[i].find(temp)==a[i].end()){
                a[i].insert(temp);
                found = true;
            }
        }
        if(!found){
            a.push_back({temp});
        }
        if(a[0].size()==n){
            a.pop_front();
            cout << 1;
        } else {
            cout << 0;
        }
    }
    cout << "\n";
}