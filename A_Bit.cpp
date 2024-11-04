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
    int x =0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[0] == 'X'){
            if(s[1] == '+'&&s[2] == '+'){
                x+=1;
            }else if(s[1] == '-' && s[1 ]== '-'){
                x-=1;
            }
        }else if(s[0] == '+' && s[1] == '+'){
            x+=1;
        }else if(s[0] == '-' && s[1] == '-'){
            x-=1;
        }
    }
    cout<<x;
    return 0;
}