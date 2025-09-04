#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    FIN;
    ll t = 1;
    cin >> t;

    string a;
    ll res = 0;

    while(t--){
        cin >> a;
        if (a[1]=='+'){
            res++;
        } else {
            res--;
        }
    }
    cout << res << "\n";
}