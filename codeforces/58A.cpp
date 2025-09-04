#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string s, h="hello";
    ll j=0;
    getline(cin, s);
    for(ll i=0; i<(ll)s.length() && j<5; ++i){
        if(s[i]==h[j]){
            j++;
        }
    }
    if(j==5){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}