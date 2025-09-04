#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN;
    ll t,q , n, temp, temp2, res;
    cin >> t;
    vector<ll> v;
    while(t){
        cin>>q;
        while(q){
            res = 0;
            cin >> n;
            if(n==3){
                cin >> temp;
                v.push_back(temp);
            } else if(n==2){
                reverse(v.begin(),v.end());
            } else{
                temp = v[0];
                fore(i,1,v.size()){
                    temp2=v[i];
                    v[i]=temp;
                    temp=temp2;
                }
                v[0]=temp;
            }
            fore(i,0,v.size()){
                res+=v[i]*(i+1);
            }
            cout << res << "\n";
            q--;
        }
        t--;
    }
}