#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll a, b, i = 0;
    cin >> a >> b;
    while(a<=b){
        a*=3;
        b*=2;
        i++;
    }
    cout << i << "\n";
}