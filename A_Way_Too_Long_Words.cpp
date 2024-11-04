#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()>10){
            cout<<s.front()<<s.length()-2<<s.back()<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}