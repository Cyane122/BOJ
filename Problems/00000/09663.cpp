#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9663 N-Queen - https://www.acmicpc.net/problem/9663
 * Tier: Gold IV
 */

int N, res = 0; vector<pair<int, int>> p;

bool fun(int i, int j) {
    for(auto k: p) {
        if(k.first == i || k.second == j || abs(k.first - i) == abs(k.second - j)) return false;
    }
    return true;
}

void DFS(int n) {
    if(n == N) {
        res++;
        return;
    } else {
        for(int i = 1; i <= N; i++) {
            if(fun(n+1, i)) {
                p.emplace_back(n+1, i);
                DFS(n+1);
                p.erase(p.end() - 1);
            }
        }
    }
}

int main() {
    fastio;
    cin >> N;
    DFS(0);
    cout << res;
    return 0;
}