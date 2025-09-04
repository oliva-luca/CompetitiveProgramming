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
    string a,b;
    ll sa, sb;
    while(t){
        cin >> a >> b;
        sa = 0;
        sb =0;
        if(a[SZ(a)-1]=='L')sa=SZ(a);
        if(a[SZ(a)-1]=='S')sa=SZ(a)*(-1);
        if(b[SZ(b)-1]=='L')sb=SZ(b);
        if(b[SZ(b)-1]=='S')sb=SZ(b)*(-1);
        if(sa==sb){
            cout << "=" << "\n";
        } else if(sa<sb){
            cout << "<" << "\n";
        }else if(sa>sb){
            cout << ">" << "\n";
        }

        t--;
    }
}