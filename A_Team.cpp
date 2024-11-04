#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    fast;
    int n;
    cin>>n;
    int solved =0;
    for(int i=0;i<n;i++){
        int petya,vasya,tonya ;
        cin>>petya>>vasya>>tonya;
        if(petya == 1 && vasya == 1){
            solved++;
        }else if(petya == 1 && tonya == 1){
            solved++;
        }else if(vasya == 1 && tonya == 1){
            solved++;
        }
    }
    cout<<solved;
    return 0;
}