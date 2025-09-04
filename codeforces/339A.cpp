#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

int main(){
    FIN;
    string a, res = "";
    int n[3]={0,0,0};
    ll temp;
    cin >> a;

    fore(i,0,a.length()){
        n[(int)a[i]-'1']++;
        i++;
    }

    fore(i,0,3){
        fore(j,0,n[i]){
            res+= to_string(i+1) + "+";
        }
    }
    res[res.length()-1] = '\n';

    cout << res;
}