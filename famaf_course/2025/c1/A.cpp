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
    ll t,n,a,b,c;
    cin >> t;
    while(t){
        ll res = 0;
        cin >> n >> a >> b >> c;   
        if(a>n)res++;
        if(b>n)res++;
        if(c>n)res++;
        cout << res << "\n";
        t--;
    }
}