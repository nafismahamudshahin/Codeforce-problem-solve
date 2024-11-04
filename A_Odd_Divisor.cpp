#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll div = 0;
        for(int i=3;i<n;i+=2){
            if(n%i ==0){
                div = i;
                break;
            }
        }
        if(div == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}