#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
bool check(int n){
    bool flag = true;
    while(n != 0){
        int last = n%10;
        if(last != 4 || last != '7'){
            flag = false;
        }
        n/=10;
    }
    return flag;
}
int main(){
    fast;
    ll n;
    cin>>n;
    bool f = check(n);
    if(f)cout<<"YES";
    else cout<<"NO";
    return 0;
}