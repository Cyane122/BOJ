#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2839 설탕 배달 - https://www.acmicpc.net/problem/2839
 * Tier: Silver IV
 */

using namespace std;

int main() {
    fastio;

    int N, res = 0; cin >> N;
    while(true) {
        if(N%5 == 0) {
            res+=(N/5);
            cout << res;
            break;
        }
        N-=3; res++;
        if(N<3 && N%3 != 0) {
            cout << -1;
            break;
        } else if (N == 0) {
            cout << res;
            break;
        }
    }

    return 0;
}