#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string s;
    cin>>s;
    if(s.front()>= 'a' && s.front()<= 'z'){
        s.front()-=32;
    }
    cout<<s;
    return 0;
}