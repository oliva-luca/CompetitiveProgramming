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
    ll n,k,M=0,res=0;
    cin >> n >>k;
    set<ll> s;
    vector<ll> a(n);
    for(auto& i:a){
        cin >> i;
        M=max(M,i);
    }

    ll l=1,r=M,p;
    while(l<=r){
        bool esM = false;
        p=(l+r)/2;
        vector<ll> b(n+1);
        fore(i,1,n+1){
            if(a[i-1]>=p)b[i]=b[i-1]+1;
            else b[i]=b[i-1]-1;
        }

        ll j=k,m=M;
        while(j<n+1){
            m=min(m,b[j-k]);
            if(b[j]-m>0)esM=true;
            j++;
        }

        if(b[n]>0){
            l=p+1;
        } else r=p-1;
    }
    cout << r << "\n";
}