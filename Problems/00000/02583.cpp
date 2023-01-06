#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2583 영역 구하기 - https://www.acmicpc.net/problem/2583
 * Tier: Silver I
 */

int M, N, K, R = 0, S = 0; bool visited[101][101], area[101][101]; vector<int> v; int P, Q;
pair<int, int> d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void DFS(int x, int y) {
    visited[x][y] = true;
    cout << "(" << P << ", " << Q << ") " << R << ": " << x << ", " << y << endl;
    for(auto i: d) {
        int nx = i.first + x;
        int ny = i.second + y;
        if(nx >= 0 && ny >= 0 && nx < M && ny < N && !visited[nx][ny] && !area[nx][ny]) {
            R++;
            DFS(nx, ny);
        }
    }
}

int main() {
    fastio;
    cin >> M >> N >> K;
    for(int i = 0; i < N; i++) {
        fill(area[i], area[i]+M, false);
    }
    for (int i = 0; i < K; i++) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        // 좌표계 변환
        X2--;
        Y2--;
        int lefty_converted = M - 1 - Y1;
        int leftx_converted = X1;
        int righty_converted = M - 1 - Y2;
        int rightx_converted = X2;

        // 사각형 영역에 대해 1로 표시
        for (int a = righty_converted; a <= lefty_converted; a++) {
            for (int b = leftx_converted; b <= rightx_converted; b++) {
                area[a][b] = true;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(area[i][j] && !visited[i][j]) {
                P = j, Q = i;
                DFS(j, i);
                if(R != 0) v.push_back(R);
                R = 0;
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;

    for(auto i: v) cout << i << " ";

    return 0;
}