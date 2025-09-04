#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll i =1, n = 1, k = 1, a=0, res = 0, temp = 0;
    cin >> n >> k;
    i=n;
    fore(i,0,n){
        cin >> a;
        if(i==k-1){
            temp = a;
        }
        if(i>=k-1 && a==temp && a>0){
            res++;
        }else if(a > 0 && a > temp){
            res++;
        }
    }
    cout << res << "\n";
}