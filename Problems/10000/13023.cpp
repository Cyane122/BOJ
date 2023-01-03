#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 13023 ABCDE - https://www.acmicpc.net/problem/13023
 * Tier: Gold V
 */

int n,m,a;
vector<int> graph[2001];
int ck[2001];

int dfs(int start,int cnt){
    if(cnt == 5) return 1;
    if(ck[start]) return 0;
    ck[start] = 1;
    int ans = 0;
    for(int i = 0; i < graph[start].size(); i++){
        int next = graph[start][i];
        if(ck[next]) continue;
        ans = max(ans,dfs(next,cnt+1));
    }
    ck[start] = 0;
    return ans;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int start, end;
        cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    for(int i = 0; i < n; i++){
        memset(ck,0,sizeof(ck));
        a = max(a,dfs(i,1));
    }
    cout << a <<'\n';
}