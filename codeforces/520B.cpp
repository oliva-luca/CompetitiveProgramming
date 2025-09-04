#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll n,m,res=0;
    cin >>n>> m;
    while(m>n){
        if(m%2==1){
            m++;
            res++;
        }
        m/=2;
        res++;
    }
    res+= n-m;
    cout << res << "\n";
}