#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 24444 알고리즘 수업 - 너비 우선 탐색 1 - https://www.acmicpc.net/problem/24444
 * Tier: Silver II
 */

queue<int> q; bool visited[100002]; int graph[100002][100002]; int N, M, R, step[100002], s = 1;

int main() {
    fastio;
    cin >> N >> M >> R;
    while(M--) {
        int x, y; cin >> x >> y;
        graph[x][y] = true;
        graph[y][x] = true;
    }

    for(int i = 1; i <= N; i++) visited[i] = false;

    visited[R] = true;
    q.push(R);
    step[R] = s; s++;
    while(!q.empty()) {
        int K = q.front();
        q.pop();
        for(int i = 1; i <= N; i++) {
            if(!visited[i] && graph[K][i]) {
                visited[i] = true;
                q.push(i);
                step[i] = s;
                s++;
            }
        }
    }
    for(int i = 1; i <= N; i++) cout << step[i] << endl;
    return 0;
}