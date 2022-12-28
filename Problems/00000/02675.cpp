#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2675 문자열 반복 - https://www.acmicpc.net/problem/2675
 * Tier: Bronze II
 */

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int k; string s; cin >> k >> s;
        for(char c: s) {
            for(int j = 0; j < k; j++) cout << c;
        }
        cout << endl;
    }
    return 0;
}