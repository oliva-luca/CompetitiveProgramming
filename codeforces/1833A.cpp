#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t,n;
    cin >> t;
    string temp, s;
    set<string> res;
    while(t){
        s="";
        res.clear();
        cin >> n >> temp;
        fore(i,0,n){
            s+=temp[i];
            if(s.size()==2){
                res.insert(s);
                s.clear();
                s+=temp[i];
            }
        }
        cout << res.size() << "\n";
        t--;
    }
}