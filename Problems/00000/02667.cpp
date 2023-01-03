#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2667 단지번호붙이기 - https://www.acmicpc.net/problem/2667
 * Tier: Silver I
 */

string apart[26]; int N, A = 0, R = 0; vector<int> v; bool visited[26][26];
pair<int, int> d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void DFS(int x, int y) {
    if(visited[x][y]) return;
    else {
        A++;
        visited[x][y] = true;
        for(auto &i : d) {
            int nx = i.first + x;
            int ny = i.second + y;
            if(nx >= 0 && ny >= 0 && nx < N && ny < N) {
                if(apart[nx][ny] == '1' && !visited[nx][ny]) {
                    DFS(nx, ny);
                }
            }
        }
    }
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> apart[i];
        fill(visited[i], visited[i]+N, false);
    }

    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            if(visited[i][j] || apart[i][j] == '0') continue;
            else {
                if(apart[i][j] == '1') {
                    DFS(i, j);
                    v.push_back(A);
                    A = 0;
                    R++;
                }
            }
        }
    }

    sort(v.begin(), v.end());

    cout << R << endl;
    for(auto i : v) cout << i << endl;

    return 0;
}