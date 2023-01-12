#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 24444 알고리즘 수업 - 너비 우선 탐색 1 - https://www.acmicpc.net/problem/24444
 * Tier: Silver II
 */

queue<int> q; bool visited[100002]; vector<int> v[100001]; int N, M, R, step[100002], s = 1;

int main() {
    fastio;
    cin >> N >> M >> R;
    while(M--) {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i = 1; i <= N; i++) {
        visited[i] = false;
        sort(v[i].begin(), v[i].end());
    }

    visited[R] = true;
    q.push(R);
    step[R] = s; s++;
    while(!q.empty()) {
        int K = q.front();
        q.pop();
        for(auto i: v[K]) {
            if(visited[i]) continue;
            step[i] = s;
            s++;
            visited[i] = true;
            q.push(i);
        }
    }
    for(int i = 1; i <= N; i++) cout << step[i] << endl;
    return 0;
}