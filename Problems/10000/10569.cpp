#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10569 다면체 - https://www.acmicpc.net/problem/10569
 * Tier: Bronze III
 */

int T, V, E;

int main() {
    fastio;
    cin >> T;
    while(T--) {
        cin >> V >> E;
        cout << 2 - V + E << endl;
    }
    return 0;
}