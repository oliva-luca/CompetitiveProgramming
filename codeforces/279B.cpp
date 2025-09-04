#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll n,t,temp,res=0;
    cin >>n>> t;
    vector<ll> a;
    cin >> temp;
    a.push_back(temp);
    fore(i,1,n){
        cin >> temp;
        a.push_back(temp+a[i-1]);
    }
    fore(i,0,n){
        ll k,x=i,y=n-1;
        while(x<=y){
            k=(x+y)/2;
            if(a[k]-(i==0?0:a[i-1])<=t&&(a[k+1]-(i==0?0:a[i-1])>t||k==n-1)){
                res=max(res,k-i+1);
                break;
            }
            if(a[k]-(i==0?0:a[i-1])>t)y=k-1;
            else x=k+1;
        }
    }
    cout << res << "\n";
}