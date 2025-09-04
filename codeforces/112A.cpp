#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    FIN;

    string a, b;
    ll res = 0;

    cin >> a >> b;

    for(ll i = 0; i<(ll)a.length() && res==0 ; i++){
        if(toupper(a[i])>toupper(b[i])) res=1;
        else if(toupper(a[i])<toupper(b[i])) res=-1;
    }

    cout << res << "\n";
}