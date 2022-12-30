#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 8958 OX퀴즈 - https://www.acmicpc.net/problem/8958
 * Tier: Bronze II
 */

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        string s; cin >> s; int res = 0, len = 0;
        for(char c: s) {
            if(c == 'O') {
                len++;
                res += len;
            } else {
                len = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}