#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(int i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll r,c;
    cin >> r >> c;
    char a;
    bool s[r][c];
    set<ll> col;
    set<ll> fil;
    fore(i,0,r){
        fore(j,0,c){
            s[i][j]=true;
        }
    }
    fore(i,0,r){
        fore(j,0,c){
            cin >> a;
            if (a=='S'){
                col.insert(j);
                fil.insert(i);
            }
        }
    }

    cout << (r*c)-(SZ(col)*SZ(fil)) << "\n";
}