#include <bits/stdc++.h>
#define fst first
#define snd second
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(s) ll(s.size())
#define subMod(a,b,m) ((a-b)%m+m)%m
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){
    FIN;
    string s,t;
    getline(cin,s);
    getline(cin,t);
    vector<ll> dp;
    fore(i,0,SZ(s)){
        fore(j,0,SZ(t)){
            if(s[i]==t[j]){
                auto temp = lower_bound(dp.begin(),dp.end(),j);
                if(temp==dp.end())dp.push_back(j);
                else{
                    if(*temp==j)continue;
                    *(temp) = j;
                }
            }
        }
    }
    fore(i,0,SZ(dp)){
        cout << t[dp[i]];
    }

    cout <<"\n";
}