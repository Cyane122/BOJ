#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10995 별 찍기 - 20 - https://www.acmicpc.net/problem/10995
 * Tier: Bronze III
 */

int N;

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        if(i%2 == 1) cout << " ";
        for(int j = 0; j < N; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}