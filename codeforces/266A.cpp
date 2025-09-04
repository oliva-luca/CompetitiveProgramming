#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    ll t,res=0;
    char l='X',n;
    cin >> t;
    fore(i,0,t){
        cin >> n;
        if(n==l){
            res++;
        }
        l=n;
    }
    cout << res << "\n";
}