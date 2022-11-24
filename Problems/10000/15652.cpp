#include <bits/stdc++.h>
/**
 * #15652 N과 M(4) https://www.acmicpc.net/problem/15652
 */

using namespace std;

int res[8] = {};
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
        if(res[idx - 1] <= i) {
            res[idx] = i;
            fun(idx + 1);
        }
    }
}

int main() {

    cin >> N >> M;

    fun(1);

    return 0;
}
