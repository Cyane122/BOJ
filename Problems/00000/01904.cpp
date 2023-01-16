#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1904 01타일 - https://www.acmicpc.net/problem/1904
 * Tier: Silver III
 */

int N; vector<long long> pib = {0, 1, 2};


int main() {
    fastio;
    cin >> N;
    for(int i = 3; i <= N; i++) {
        pib.push_back((pib[i-1] + pib[i-2])%15746);
    }
    cout << pib[N]%15746;
    return 0;
}