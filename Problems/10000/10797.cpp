#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fr(n) for(int i = 0; i < n; i++)

using namespace std;

/**
 * BOJ 10797 10부제 - https://www.acmicpc.net/problem/10797
 * Tier: Bronze IV
 */

int N, cnt = 0;

int main() {
    fastio;
    cin >> N;
    fr(5) {
        int k; cin >> k; if(k == N) cnt++;
    }
    cout << cnt;
    return 0;
}