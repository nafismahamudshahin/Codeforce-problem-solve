#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;
    cin>>n;
    // if(n%2 == 0){
    //     int f = n/2;
    //     if(f%2 == 0){
    //         cout<<"YES";
    //     }else{
    //        int d = (n/2)+1;
    //        if(f<2){
    //          cout<<"NO";
    //        }else if(d%2 ==0){
    //          cout<<"YES";
    //        }else{
    //          cout<<"NO";
    //        }
    //     }
    // }else{
    //     cout<<"NO";
    // }
    if(n%2 == 0 && n>2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}