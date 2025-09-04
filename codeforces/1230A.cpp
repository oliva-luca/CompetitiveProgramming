#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll n,k,i=1;
    string x;
    cin >> n >> k >> x;
    if(k>0){
        if(x[0]=='1'&&k<n)k++;
        if(x.length()>1){
            x[0]='1';
            while(i<k){
                if(x[i]=='0'&&k<n){
                    k++;
                } else {
                    x[i]='0';
                }
                i++;
            }
        }else{
            x[0]='0';
        }
    }
    cout << x << "\n";
}