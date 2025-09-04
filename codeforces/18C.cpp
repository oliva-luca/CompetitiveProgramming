#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll n,res=0,temp;
    cin >> n;
    ll a[n];
    cin >> temp;
    a[0]=temp;
    fore(i,1,n){
        cin >> temp;
        a[i]=a[i-1]+temp;
    }
    fore(i,0,n-1){
        if(a[i]==a[n-1]-a[i]){
            res++;
        }
    }
    cout << res << "\n";
}