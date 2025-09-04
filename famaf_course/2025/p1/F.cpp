#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
#define subMod(a,b,m) ((a-b)%m+m)%m
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t;
    cin >> t;
    while(t){
        ll n,c=0;
        cin >> n;
        vector<ll> a(n), b(n+1,0);
        for(auto& i:a)cin>>i;
        fore(i,1,n+1){
            b[i] = b[i-1]+a[i-1];
        }
        string s;
        cin >> s;
        ll l=0,r=n-1;
        while(l<=r){
            while(l<n){
                if(s[l]=='L')break;
                l++;
            }
            while(r>=0){
                if(s[r]=='R')break;
                r--;
            }
            if(l<=r)c+=b[r+1]-b[l];
            l++;r--;
        }
        cout << c <<"\n";
        t--;
    }
}