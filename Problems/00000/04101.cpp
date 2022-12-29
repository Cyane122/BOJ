#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 4101 크냐? - https://www.acmicpc.net/problem/4101
 * Tier: Bronze V
 */

int main() {
    fastio;
    int A, B;
    cin >> A >> B;
    while(A != 0 && B != 0) {
        if(A > B) cout << "Yes" << endl;
        else cout << "No" << endl;
        cin >> A >> B;
    }
    return 0;
}