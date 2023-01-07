#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 26517 연속인가?? - https://www.acmicpc.net/problem/26517
 * Tier: Silver V
 */

long long int K, A, B, C, D;

int main() {
    fastio;
    cin >> K >> A >> B >> C >> D;
    if(A*K + B == C*K + D) cout << "Yes " << A*K + B;
    else cout << "No";
    return 0;
}