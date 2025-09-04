#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, n,m, temp=0;
    cin >> t;
    map<ll,ll> a;
    set<ll> s;
    bool res;
    fore(i,0,t){
        cin >> n >> m;
        s.insert(n);
        if(a[n]<m){
            a[n]=m;
        }
    }
    res=false;
    fore(i,0,s.size()){
        if(a[*next(s.begin(),i)]<temp){
            res = true;
        } else {
            temp=a[*next(s.begin(),i)];
        }
    }
    if(res){
        cout << "Happy Alex" << "\n";
    } else {
        cout << "Poor Alex" << "\n";
    }
}