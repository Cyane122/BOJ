#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5063 TGN - https://www.acmicpc.net/problem/5063
 * Tier: Bronze III
 */

int main() {
    fastio;
    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int R, E, C; cin >> R >> E >> C;
        if(R < E-C) cout << "advertise" << endl;
        else if (R == E-C) cout << "does not matter" << endl;
        else cout << "do not advertise" << endl;
    }
    return 0;
}