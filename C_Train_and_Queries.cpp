#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++){
            int station;
            cin>>station;
            mp[station].insert(i);
        }
        while(m--){
            int s,e;
            cin>>s>>e;
            if(mp.find(s) == mp.end() || mp.find(e) == mp.end()){
                cout<<"NO"<<endl;
            }else{
                int start = *mp[s].begin();
                int end = *mp[e].rbegin();
                if(start<end){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}