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
    ll n,x,tmp,res=0;
    cin >> n >> x;
    vector<ll> a(n+1);
    a[0]=0;
    fore(i,0,n){
        cin >> tmp;
        a[i+1]=tmp+a[i];
    }
    ll l=0, r=1;
    while(r<n+1){
        if(a[r]-a[l]==x){
            res++;
            l++;
            r++;
        } else  if(a[r]-a[l]>x){
            l++;
        } else  if(a[r]-a[l]<x){
            r++;
        } 
    }
    cout << res <<"\n";
}