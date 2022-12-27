#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 13023 ABCDE - https://www.acmicpc.net/problem/13023
 * Tier: Gold V
 */

bool friends[2001][2001];
list<int> visited[2001];
int N, M, A, B;
bool k = false;

void DFS(int x, int y, int t) {
    if(y == t) return;
    if(visited[t].empty()) visited[t].push_back(x);
    visited[t].push_back(y);
    if(visited[t].size() == 5) {
        k = true;
        return;
    }
    for(int i = 0; i < N; i++) {
        if(friends[y][i] && find(visited[t].begin(), visited[t].end(), i) == visited[t].end()) {
            DFS(y, i, t);
        }
    }
}

int main() {
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        fill(friends[i], friends[i]+N, false);
    }
    for(int i = 0; i < M; i++) {
        cin >> A >> B;
        friends[A][B] = true;
        friends[B][A] = true;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j) continue;
            if(friends[i][j]) DFS(i, j, i);
            if(k) {
                cout << 1 << endl;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}