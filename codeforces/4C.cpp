#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t, c;
    cin >> t;
    string temp;
    map<string,int> db;
    while(t){
        cin >> temp;
        c=db[temp];
        if(c==0){
            cout << "OK" << "\n";
        } else {
            cout << temp << c <<"\n";
        }
        db[temp]++;
        t--;
    }
}