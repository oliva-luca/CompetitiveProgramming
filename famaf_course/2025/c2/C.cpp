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
    ll t;
    cin >> t;
    while(t){
        ll n, r=0,ca=0,cb=0;
        cin >> n;
        vector<ll> a(n),b(n);
        for(auto& i:a)cin >>i;
        for(auto& i:b)cin >>i;
        fore(i,0,n){
            if(a[i]!=b[i]){
                if(a[i])ca++;
                if(b[i])cb++;
            }
        }
        r = abs(ca-cb)+(ca!=0&&cb!=0);
        cout << r << "\n";
        t--;
    }
}