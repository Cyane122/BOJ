#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 10816 숫자 카드 2 - https://www.acmicpc.net/problem/10816
 * Tier: Silver 4
 */

using namespace std;

map<int, int> m;

int main() {
    fastio;

    int N, M; cin >> N;

    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        if(m.find(k) != m.end()) m[k]++;
        else m.insert({k, 1});
    }

    cin >> M;
    for(int i = 0; i < M; i++) {
        int k; cin >> k;
        if(m.find(k) != m.end()) {
            cout << m.find(k)->second << " ";
        } else cout << "0 ";
    }

    return 0;
}