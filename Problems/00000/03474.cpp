#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 3474 교수가 된 현우 - https://www.acmicpc.net/problem/3474
 * Tier: Silver III
 */

int T;

int get5(int i) {
    if(i%5 == 0) return 1 + get5(i/5);
    else return 0;
}

int main() {
    fastio;
    cin >> T;
    while(T--) {
        int N; cin >> N;
        int c5 = 0;
        for(int i = 5; i <= N; i *= 5) {
            c5 += N/i;
        }

        cout << c5 << endl;
    }
    return 0;
}