#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string s;
    cin>>s;
    int upparcase = 0;
    int lowarcase = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            upparcase++;
        }else{
            lowarcase++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(upparcase>lowarcase){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
            
        }else{
            if(s[i]>= 'A' && s[i]<='Z'){
                s[i] =  s[i]+32;
            }
        }
    }
    cout<<s;
    return 0;
}