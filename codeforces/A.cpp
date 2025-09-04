#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t;
    cin >> t;
    string s;
    while(t){
        fore(i,0,3){
            cin >> s;
            cout << s[0];
            s.clear();
        }
        cout<<"\n";
        t--;
    }
}