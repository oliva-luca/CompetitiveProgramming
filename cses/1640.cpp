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
    vector<ii> a(n);
    fore(i,0,n){
        cin >> tmp;
        a[i]={tmp,i+1};
    }
    sort(a.begin(),a.end());
    ll l=0, r=n-1;
    while(r>l){
        if(a[r].first+a[l].first==x){
            cout << a[l].snd << " " << a[r].snd <<"\n";
            return 0;
        } else  if(a[r].first+a[l].first>x){
            r--;
        } else  if(a[r].first+a[l].first<x){
            l++;
        } 
    }
    cout << "IMPOSSIBLE" <<"\n";
}