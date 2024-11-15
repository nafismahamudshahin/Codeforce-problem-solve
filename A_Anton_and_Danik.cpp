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
    int a = 0;
    int d = 0;
    for(int i=0;i<n;i++){
       if(s[i] == 'A') a++;
       else d++;
    }
    if(a==d)cout<<"Friendship";
    else if(a>d) cout<<"Anton";
    else cout<<"Danik";
    return 0;
}