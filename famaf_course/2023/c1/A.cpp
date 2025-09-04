#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t;
    cin >> t;
    bool c = false;
    cout << "I hate ";
    fore(i,1,t){
        if(c){
            cout << "that I hate ";
        }else{
            cout << "that I love ";
        }
        c=!c;
    }
    cout << "it\n";
}