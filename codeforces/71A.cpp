#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t = 1;
    cin >> t;
    
    string a;

    while(t--){
        cin >> a;
        if(a.length()>10){
            cout << a[0] << a.length()-2 << a[a.length()-1] << "\n";
        } else {
            cout << a << "\n";
        }
    }
}