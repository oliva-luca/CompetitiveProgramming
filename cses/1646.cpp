#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll n,q,res,prev=0,pos=1;
    cin >> n >> q;
    ll a[n];
    fore(i,0,q){
        cin >> a[i];
        prev+=a[i];
    }
    res = prev;
    fore(i,q,n){
        cin >> a[i];
        prev=prev+a[i]-a[i-q];
        if(res>prev){
            res=prev;
            pos=i+2-q;
        }
    }
    cout << pos << "\n";
}