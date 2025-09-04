#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,Thxdem=b;i<Thxdem;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

int main(){
    FIN;
    unordered_set<char> s;
    char a;
    while(cin>>a) s.insert(a);
    if(s.size()%2){
        cout << "IGNORE HIM!\n";
    } else {
        cout << "CHAT WITH HER!\n";
    }
}