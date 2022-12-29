#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10886 0 = not cute / 1 = cute - https://www.acmicpc.net/problem/10886
 * Tier: Bronze III
 */

int main() {
    fastio;
    int T; cin >> T; int s = 0;
    for(int i = 0; i < T; i++) {
        int k; cin >> k; if(k == 1) s++; else s--;
    }
    cout << ((s > 0) ? "Junhee is cute!" : "Junhee is not cute!");
    return 0;
}