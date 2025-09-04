#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

int main(){
    FIN;
    bool a[25];
    int i = 0;

    input(a);

    while(!a[i]){
        i++;
    }
    cout << abs(i%5-2) + abs(i/5-2) << "\n";
}