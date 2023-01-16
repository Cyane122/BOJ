#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1977 완전제곱수 - https://www.acmicpc.net/problem/1977
 * Tier: Bronze II
 */

int N, M, m = 10000000, s = 0; bool exist = false;

int main() {
    fastio;
    cin >> N >> M;
    for(int i = floor(sqrt(N)); i <= ceil(sqrt(M)); i++) {
        if(pow(i, 2) >= N && pow(i, 2) <= M) {
            exist = true;
            m = min(m, (int) pow(i, 2));
            s += pow(i, 2);
        }
    }
    if(exist) {
        cout << s << endl << m;
    } else cout << -1;
    return 0;
}