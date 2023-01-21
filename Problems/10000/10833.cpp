#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10833 사과 - https://www.acmicpc.net/problem/10833
 * Tier: Bronze III
 */

int N, T = 0, A, B;

int main() {
    fastio;
    cin >> N;
    while(N--) {
        cin >> A >> B;
        T += B%A;
    }
    cout << T;
    return 0;
}