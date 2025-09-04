#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(ll i=a; i<b;i++)
typedef long long ll;
using namespace std;

int main(){
    FIN; 
    ll t, j, i, c1, c2;
    cin >> t;
    string s,p;
    char a;
    bool res;
    while(t){
        cin >> p >> s;
        c1=0;
        c2=0;
        j=0;
        i=0;
        res = true;
        while((i<s.length()||j<p.length())&&res){
            a = p[j];
            while(p[j]==a){
                j++;
                c1++;
            }
            while(s[i]==a){
                i++;
                c2++;
            }
            res = c2>=c1 && c2<=c1*2;
            c1=0;
            c2=0;
        }
        if(res){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        s.clear();
        p.clear();
        t--;
    }
}