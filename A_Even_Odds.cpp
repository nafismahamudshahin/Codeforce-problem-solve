#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    vector<ll>odd;
    vector<ll>even;
    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    for(auto i:even){
        odd.push_back(i);
    }
    cout<<odd[m-1];
    return 0;
}