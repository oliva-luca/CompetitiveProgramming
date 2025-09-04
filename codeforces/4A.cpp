#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    int a = 1;
    cin >> a;
    if(a%2 || a<=2){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }
}