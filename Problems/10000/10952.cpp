#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10952 A+B - 5 - https://www.acmicpc.net/problem/10952
 * Tier: Bronze V
 */

int A, B;

int main() {
    fastio;
    while(true) {
        cin >> A >> B;
        if(A == 0 && B == 0) return 0;
        cout << A+B << endl;
    }
    return 0;
}