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
    ll m,s;
    cin >> m >> s;
    if((s==0&&m>1)||9*m<s){
        cout << -1 << " " << -1 << "\n";
        return 0;
    }
    vector<ll> a(m);
    dfore(i,m-1,0){
        if(s>9){
            a[i]=9;
            s-=9;
        } else {
            if(i==0){
                a[i]=s;
            }else{
                a[i]=s-1;
                s=1;
            }
        }
    }
    fore(i,0,m){
        cout << a[i];
    }
    cout << " ";
    if(a[m-1]!=0) sort(a.begin(),a.end(),std::greater<int>());
    fore(i,0,m){
        cout << a[i];
    }
    cout << "\n";
}