#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]  <= 'Z'){
            a[i] = a[i]+32;
        }
        if(b[i]>='A' && b[i]  <= 'Z'){
            b[i] = b[i]+32;
        }
    }
    if(a == b){
        cout<<0;
    }else{
        for(int i=0;i<a.length();i++){
            if(a[i] == b[i]){
                continue;
            }else if(a[i] > b[i]){
                cout<<1;
                break;
            }else{
                cout<<-1;
                break;
            }
        }
    }
    return 0;
}