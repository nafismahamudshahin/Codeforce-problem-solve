#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string s,y;
    cin>>s>>y;
    reverse(all(y));
    if(s.length() == y.length()){
        bool flag = true;
        for(int i=0;i<s.length();i++){
            if(s[i] != y[i]){
                flag = false;
                break;
            }
        }
        cout<<(flag?"YES":"NO");
    }else cout<<"NO";
    return 0;
}