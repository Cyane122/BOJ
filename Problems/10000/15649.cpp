#include <bits/stdc++.h>
/**
 * #15649 N과 M(1) https://www.acmicpc.net/problem/15649
 */

using namespace std;

bool used[9] = {};
int res[9] = {};
int N, M;

void fun(int idx) {
    if(idx > M) {
        for(int i = 1; i <= M; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= N; i++) {
        if(!used[i]) {
            res[idx] = i;
            used[i] = true;
            fun(idx + 1);
            used[i] = false;
        }
    }
}

int main() {

    cin >> N >> M; // N개 중 M개 나열 -> 개수는 nPm = n!/m!

    fun(1);

    return 0;
}
