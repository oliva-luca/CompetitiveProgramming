#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,Thxdem=b;i<Thxdem;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define input(a) for(auto& i:a) cin>>i
typedef long long ll;
using namespace std;

int main(){
 set<int> s = {2,1,4,8,6};
 set<int>::iterator x = (s.lower_bound(4));
 cout << *x << " " << *s.upper_bound(4);
}