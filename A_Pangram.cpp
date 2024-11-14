#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;
    string s;
    cin>>n>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            s[i] = s[i]+32;
        }
    }
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(mp.size() == 26){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}