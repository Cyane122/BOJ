#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14888 연산자 끼워넣기 - https://www.acmicpc.net/problem/14888
 * Tier:
 */

int num[12];
int operate[4]; // 0 더하기 1 빼기 2 곱하기 3 나누기
int N, M = -1000000001, m = 1000000001;

void dfs(int d, int sum, int plus, int minus, int multi, int divide) {
    if(d == N-1) {
        if(plus > 0) sum += num[d];
        else if (minus > 0) sum -= num[d];
        else if (multi > 0) sum *= num[d];
        else sum /= num[d];
        M = max(sum, M);
        m = min(sum, m);
        return;
    }
    if (plus > 0) dfs(d + 1, sum + num[d], plus - 1, minus, multi, divide);
    if (minus > 0) dfs(d + 1, sum - num[d], plus, minus - 1, multi, divide);
    if (multi > 0) dfs(d + 1, sum * num[d], plus, minus, multi - 1, divide);
    if (divide > 0) dfs(d + 1, sum / num[d], plus, minus, multi, divide - 1);
}

int main() {
    fastio;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> num[i];
    }
    for(int i = 0; i < 4; i++) cin >> operate[i];

    dfs(1, num[0], operate[0], operate[1], operate[2], operate[3]);
    cout << M << endl << m;
    return 0;
}