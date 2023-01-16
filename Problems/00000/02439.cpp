#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2439 별 찍기 - 2 - https://www.acmicpc.net/problem/2439
 * Tier: Bronze IV
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < N-i; j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}