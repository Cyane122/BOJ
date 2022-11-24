#include <bits/stdc++.h>
/**
 * #15651 N과 M(3) https://www.acmicpc.net/problem/15651
 */

using namespace std;

bool used[8] = {};
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
        res[idx] = i;
        fun(idx + 1);
    }
}

int main() {

    cin >> N >> M; // N개 중 M개 나열 -> 개수는 nPm = n!/m!

    fun(1);

    return 0;
}
