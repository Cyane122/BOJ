#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 11724 연결 요소의 개수 - https://www.acmicpc.net/problem/11724
 * Tier: Silver II
 */

int graph[1002][1002];
bool visited[1002];
int N, M, U, V, res = 0;
void DFS(int d) {
    if(visited[d]) return;
    visited[d] = true;
    for(int i = 1; i <= N; i++) {
        if(graph[d][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    fastio;
    cin >> N >> M;
    fill(visited, visited+N, false);
    for(int i = 0; i < M; i++) {
        cin >> U >> V;
        graph[U][V] = 1;
        graph[V][U] = 1;
    }
    for(int i = 1; i <= N; i++) {
        if(!visited[i]) {
            res++;
            DFS(i);
        }
    }
    cout << res;
    return 0;
}