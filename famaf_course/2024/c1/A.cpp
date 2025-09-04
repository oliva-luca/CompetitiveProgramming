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
    ll t,n;
    cin >> t;
    while(t){
        cin >> n;
        if(n<1400){
            cout << "Division 4" << "\n";
        } else if(n<1600){
            cout << "Division 3" << "\n";
        } else if(n<1900){
            cout << "Division 2" << "\n";
        }else{
            cout << "Division 1" << "\n";
        }
        t--;
    }
}