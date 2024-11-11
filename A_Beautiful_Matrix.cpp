#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int grid[5][5];
vector<pair<int,int>>d = {{0,1},{0,-1},{-1,0},{1,0}};
bool vis[5][5];
int cnt =0;
bool isPossible(int i,int j){
    return i >= 0 && i < 5 && j >= 0 && j < 5;
}
int dfs(int si,int sj){
    

}/*

int dfs(int i,int j){
    int appartment =1;
    vis[i][j]= true;
    for(int k=0;k<4;k++){
        int ci =i + d[k].first;
        int cj =j + d[k].second;
       if(isValid(ci,cj)){
          appartment += dfs(ci,cj);
       }
    }
    return appartment;
}
*/
int main(){
    fast;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            vis[i][j] = false;
        }
    }
    dfs(3,3); 
    cout<<cnt<<endl;
    return 0;
}