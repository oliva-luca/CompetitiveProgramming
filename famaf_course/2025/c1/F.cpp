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
    ll t,n,c,q,x,y,h,l;
    cin >> t;
    while(t){
        string s;
        char temp;
        vector<ll> low;
        vector<ll> init;
        cin >> n >> c >> q;
        fore(i,0,n){
            cin >> temp;
            s.push_back(temp);
        }
        l=n;
        low.push_back(0);
        init.push_back(0);
        while(c){
            cin >> x >> y;
            low.push_back(l);
            init.push_back(x-1);
            l+=y-x+1;
            c--;
        }
        while(q){
            cin >> h;
            h--;
            while(h>=n){
                auto it = upper_bound(low.begin(),low.end(),h);
                it--;
                h=init[distance(low.begin(),it)]+h-*it;
            }
            cout <<s[h] << "\n";
            q--;
        }
        t--;
    }
}
