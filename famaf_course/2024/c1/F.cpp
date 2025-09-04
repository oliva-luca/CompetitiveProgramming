#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t,n,res;
    cin >> t;
    char a;
    vector<pair<ll,map<char,ll>>> m;
    string s;
    while(t){ 
        cin >> n;
        res=n;
        fore(i,0,n){
            cin >> a;
            s.push_back(a);
        }
        fore(i,1,n);
        t--;
    }
    cout << "\n";
}