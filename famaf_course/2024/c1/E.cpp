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
    ll t,n,q,temp,nsum,x,y;
    cin >> t;
    vector<ll> a;
    while(t){
        cin >> n >> q;
        cin >> temp;
        a.push_back(temp);
        fore(i,1,n){
            cin >> temp;
            a.push_back(temp+a[i-1]);
        }
        fore(i,0,q){
            cin >>x>>y>>temp;
            nsum=a[n-1]-a[y-1]+(x==1?0:a[x-2])+(y-x+1)*temp;
            if(nsum%2){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
        a.clear();
        t--;
    }
}