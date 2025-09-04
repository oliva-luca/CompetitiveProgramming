#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    ll t,n,temp;
    vector<ll> a1,a2,sum1,sum2;
    cin >> n;
    cin >> temp;
    a1.push_back(temp);
    a2.push_back(!temp);
    sum1.push_back(0);
    sum2.push_back(1);
    fore(i,1,n){
        cin >> temp;
        if(temp==a1[i-1]){
            a1.push_back(!temp);
            sum1.push_back(1+sum1[i-1]);
            a2.push_back(temp);
            sum2.push_back(sum2[i-1]);
        }
        else {
            a1.push_back(temp);
            sum1.push_back(sum1[i-1]);
            a2.push_back(!temp);
            sum2.push_back(1+sum2[i-1]);
        }
    }
    cin >> t;
    while(t){
        ll x,y;
        cin >> x >> y;
        cout << min(sum1[y-1]-(x==1?0:sum1[x-2]),
                    sum2[y-1]-(x==1?0:sum2[x-2])) << "\n";
        t--;
    }
}

/*
1 1 1 1 0 1 1 0
a
0 1 0 1 1 1

1 0 1 0 1 0 
0 1 1 2 3 4

0 1 0 1 0 1
1 1 2 2 2 2


!a&&[i]==[i-1] >>> sum1++, sum2==, a=1
a&&[i]==[i-1]  >>> sum1==, sum2++, a=0
!a&&[i]!=[i-1] >>> sum1, sum2, a=0
a&&[i]!=[i-1]  >>> sum1++, sum2==, a=1

*/