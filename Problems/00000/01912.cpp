#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1912 연속합 - https://www.acmicpc.net/problem/1912
 * Tier: Silver II
 */

using namespace std;

int main() {
    fastio;

    int N, sum = 0; cin >> N; int M = -100000000;
    for(int i = 1; i <= N; i++) {
        int t; cin >> t;
        sum += t; if(M < sum) M = sum;
        if(sum < 0) sum = 0;
    }

    cout << M;

    return 0;
}