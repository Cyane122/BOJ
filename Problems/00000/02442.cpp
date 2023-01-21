#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2442 별 찍기 - 5 - https://www.acmicpc.net/problem/2442
 * Tier: Bronze III
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = N; i > 0; i--) {
        for(int j = i-1; j > 0; j--) cout << " ";
        for(int j = 2*(N-i); j >= 0; j--) cout << "*";
        cout << endl;
    }
    return 0;
}