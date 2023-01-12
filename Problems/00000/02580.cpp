#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2580 스도쿠 - https://www.acmicpc.net/problem/2580
 * Tier: Gold IV
 */

int sudoku[9][9], res[9][9]; vector<tuple<int, int, int>> v; vector<pair<int, int>> p; // 튜플 -> (x좌표, y좌표, 그 좌표의 값)
bool finish = false;

bool fun(int x, int y, int r) {
    for(int i = 0; i < 9; i++) {
        if((sudoku[x][i] == r && i != y)|| (sudoku[i][y] == r && i != x)) return false;
    }
    int nx = floor(x/3)*3;
    int ny = floor(y/3)*3;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(sudoku[nx+i][ny+j] == r && (nx+i != x && ny+j != y)) return false;
        }
    }
    return true;
}

void DFS(int n) {
    if(n == p.size()) {
        finish = true;
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                res[i][j] = sudoku[i][j];
            }
        }
        return;
    }
    int x = p[n].first;
    int y = p[n].second;

    for(int i = 1; i <= 9; i++) {
        if(fun(x, y, i)) {
            sudoku[x][y] = i;
            DFS(n+1);
            if(finish) return;
        }
    }
    sudoku[x][y] = 0;
}

int main() {
    fastio;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
            if(sudoku[i][j] == 0) p.emplace_back(i, j);
        }
    }
    DFS(0);
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}