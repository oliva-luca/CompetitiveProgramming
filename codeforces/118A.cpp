#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string s, r="";
    char temp;
    getline(cin, s);
    for(ll i = 0; i<(ll)s.length();i++){
        temp = tolower(s[i]);
        if(!(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'||temp=='y')){
            r+='.';
            r+=tolower(s[i]);
        }
    }
    cout << r << "\n";
}