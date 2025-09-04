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
    ll n,k,temp,l=0,r,res=0;
    cin >> n >> k;
    vector<ll> a(n+1);    
    fore(i,1,n+1){
        cin >> temp;
        a[i]=temp+a[i-1];
        l=max(temp,l);
    }
    r=a[n];
    while(r>=l){
        temp = (r+l)/2;
        ll z=0,x=0;
        fore(i,0,n+1){
            if(a[i]-a[z]>temp||i==n){
                z=i;
                x++;
            }
        }
        cout << x << "\n";
        if(x==k){
            res=temp;
            l=temp+1;
        } else {
            r=temp-1;
        }
    }
    cout << res << "\n";
}