#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2606 바이러스 - https://www.acmicpc.net/problem/2606
 * Tier: Silver III
 */

bool connection[102][102];
bool infection[102];
int K, N;

void BFS(int d) {
    if(!infection[d]) return;
    for(int i = 1; i <= N; i++) {
        if(infection[i]) continue;
        else if(connection[d][i]) {
            infection[i] = true;
            BFS(i);
        }
    }
}

int main() {
    fastio;
    cin >> N >> K;
    for(int i = 0; i < K; i++) {
        int A, B; cin >> A >> B;
        connection[A][B] = true;
        connection[B][A] = true;
    }
    infection[1] = true;
    BFS(1);
    int res = 0;
    for(int i = 1; i <= N; i++) {
        if(infection[i]) res++;
    }

    cout << res - 1;
    return 0;
}