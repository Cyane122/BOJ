#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2440 별 찍기 - 3 - https://www.acmicpc.net/problem/2440
 * Tier: Bronze IV
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = N; i >= 1; i--) {
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}