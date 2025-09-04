#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t,n;
    cin >> t;
    string a,b;
    char temp;
    while(t){
        cin >> n;
        fore(i,0,n){
            cin >> temp;
            if(temp=='G'){
                temp = 'B';
            }
            a+=temp;
        }
        fore(i,0,n){
            cin >> temp;
            if(temp=='G'){
                temp = 'B';
            }
            b+=temp;
        }
        if(a==b){
            cout << "YES" << "\n";
        } else { 
            cout << "NO" << "\n";
        }
        a.clear();
        b.clear();
        t--;
    }
}