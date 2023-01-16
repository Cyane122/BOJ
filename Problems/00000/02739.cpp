#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2739 구구단 - https://www.acmicpc.net/problem/2739
 * Tier: Bronze V
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 1; i <= 9; i++) cout << N << " * " << i << " = " << N*i << endl;
    return 0;
}