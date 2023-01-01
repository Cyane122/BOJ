#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10214 Baseball - https://www.acmicpc.net/problem/10214
 * Tier: Bronze III
 */

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        int Y = 0, K = 0;
        for(int i = 0; i < 9; i++) {
            int A, B; cin >> A >> B;
            Y+=A; K+=B;
        }
        cout << ((Y>K)?"Yonsei":((Y==K)?"Draw":"Korea")) << endl;
    }
    return 0;
}