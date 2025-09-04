#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

bool existe(vector<ll> v, ll a){
    bool existe = false;
    fore(i,0,v.size()){
        existe |= v[i]==a;
    }
    return existe;
}

int main(){
    FIN;
    ll t, n, temp;
    cin >> t;
    vector<ll> s;
    while(t){
        cin >> n;
        fore(i,0,n*n){
            cin >> temp;
            if(!existe(s,temp)) s.push_back(temp); 
        }
        n *=2;
        fore(i,1,n+1){
            if(!existe(s,i)){
                cout << i << " "; 
            }
        }
        fore(i,0,s.size()){
            cout << s[i] << " ";
        }
        cout << "\n";
        s.clear();
        t--;
    }
}