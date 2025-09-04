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
    ll n,m;
    cin >> n;
    vector<ll> a(n);
    for(auto& i:a){
        cin >> i;
    }
    cin >>m;
    vector<ll> b(m);
    for(auto& i:b){
        cin >> i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ra=n*3,rb=m*3,j=0;
    fore(i,0,m){
        while(b[i]>=a[j]&&j<n){
            j++;
        }
        if(ra-rb<((j)*2+(n-j)*3)-((i+1)*2+(m-i-1)*3) ||
        (ra-rb==((j)*2+(n-j)*3)-((i+1)*2+(m-i-1)*3)&&ra<((j)*2+(n-j)*3))){
            ra=(j)*2+(n-j)*3;
            rb=(i+1)*2+(m-i-1)*3;
        }
    }
    cout <<ra<<":"<<rb<< "\n";
}