#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 9375 패션황 신해빈 - https://www.acmicpc.net/problem/9375
 * Tier: Silver 3
 */

using namespace std;

int main() {
    fastio;

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int M; cin >> M;
        map<string, int> m;
        for(int j = 0; j < M; j++) {
            string str1, str2; cin >> str1 >> str2;
            m[str2]++;
        }
        int res = 1;
        for(const auto& a: m) {
            res *= (a.second + 1);
        }

        cout << res - 1 << endl;
    }

    return 0;
}