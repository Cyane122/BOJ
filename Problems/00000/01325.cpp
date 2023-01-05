#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1325 효율적인 해킹 - https://www.acmicpc.net/problem/1325
 * Tier: Silver I
 */

int n,m,tmax,cnt;
vector<int> adj[10002], ans;
bool vi[10002] = {};

void dfs(int x){
    vi[x] = true;
    cnt++;
    for(int i : adj[x]){
        if(!vi[i]){
            dfs(i);
        }
    }
}
int main(){
    cin >> n >> m;
    int u,v;
    for(int i=0;i<m;i++){
        cin >> u >> v;
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cnt = 0;
        fill(&vi[0], &vi[n]+1,0);
        dfs(i);
        if(cnt > tmax){
            ans.clear();
            ans.push_back(i);
            tmax = cnt;
        }else if (cnt == tmax){
            ans.push_back(i);
        }
    }
    for(int an : ans){
        cout << an << ' ';
    }
    return 0;
}