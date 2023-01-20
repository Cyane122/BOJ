#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2441 별 찍기 - 4 - https://www.acmicpc.net/problem/2441
 * Tier: Bronze III
 */

int main() {
    fastio;
    int N; cin >> N;
    for(int i = N; i >= 0; i--) {
        for(int j = 0; j < N-i; j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}