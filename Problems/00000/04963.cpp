#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 4963 섬의 개수 - https://www.acmicpc.net/problem/4963
 * Tier: Silver II
 */

bool visited[52][52];
int island[52][52], W, H, R = 0;
pair<int, int> dif[8] = {{1, 1}, {1, 0}, {1, -1}, {0, 1}, {0, -1}, {-1, 1}, {-1, 0}, {-1, -1}};

void DFS(int x, int y) {
    if(visited[x][y]) return;
    else {
        visited[x][y] = true;
        for(auto & i : dif) {
            int nx = x + i.first;
            int ny = y + i.second;
            if(nx >= 0 && ny >= 0 && nx < W && ny < H) {
                if(!visited[nx][ny] && island[nx][ny] == 1) DFS(nx, ny);
            }
        }
    }
}

int main() {
    fastio;
    cin >> W >> H;
    while(W != 0 && H != 0) {
        for(int i = 0; i < H; i++) {
            for(int j = 0; j < W; j++) {
                cin >> island[j][i];
                visited[j][i] = false;
            }
        }

        for(int i = 0; i < W; i++) {
            for(int j = 0; j < H; j++) {
                if(visited[i][j]) continue;
                else {
                    if(island[i][j] == 1) {
                        R++;
                        DFS(i, j);
                    }
                }
            }
        }

        for(int i = 0; i < H; i++) {
            fill(island[i], island[i] + W, 0);
            fill(visited[i], visited[i] + W, false);
        }
        cout << R << endl;
        R = 0;
        cin >> W >> H;
    }
    return 0;
}