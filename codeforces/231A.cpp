#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    int a[3]={0,0,0};
    int res = 0;
    while(t--){
        cin >> a[0] >> a[1] >> a[2];
        if(a[0]+a[1]+a[2]>1){
            res++;
        }
    }
    cout << res << "" << "\n";
}