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
    ll t, c1, c2, c3;
    cin >> t;
    while(t){
        cin >> c1 >> c2 >> c3;
        ll m = max(c1,max(c2,c3));
        ll e = 0;
        if(m==c1)e++;
        if(m==c2)e++;
        if(m==c3)e++;
        cout << (c1==m && e<2? 0:m-c1+1) << " ";
        cout << (c2==m && e<2? 0:m-c2+1) << " ";
        cout << (c3==m && e<2? 0:m-c3+1) << " ";
        cout << "\n";
        t--;
    }
}