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
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            mp[val]++;
        }
        priority_queue<int>pq;
        for(auto [x,y]:mp){
            pq.push(y);
        }

        while(!pq.empty()){
            if(pq.size()<2)break;
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;b--;
            if(a!=0){
                pq.push(a);
            }
            if(b != 0){
                pq.push(b);
            }
        }
        int ans =0;
        while(!pq.empty()){
            int val = pq.top();
            pq.pop();
            ans+=val;
        }
        cout<<ans<<endl;
    }
    return 0;
}