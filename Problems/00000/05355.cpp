#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5355 화성 수학 - https://www.acmicpc.net/problem/5355
 * Tier: Bronze II
 */

int main() {
    fastio;
    cout << fixed;
    cout.precision(2);
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        double k;  cin >> k;
        string s; getline(cin, s);
        for(char c: s) {
            if(c == '@') k *= 3;
            else if (c == '#') k -= 7;
            else if (c == '%') k += 5;
        }
        cout << k << endl;
    }
    return 0;
}