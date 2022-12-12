#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2581 소수 - https://www.acmicpc.net/problem/2581
 */

using namespace std;

int main() {
    fastio;

    int M, N; cin >> M >> N;
    int m, sum = 0, check = 0;
    for(int i = M; i <= N; i++) {
        check = 0;
        for(int j = 1; j <= i; j++) {
            if(i%j == 0) {
                check++;
            }
        }
        if(check == 2) {
            if(sum == 0) m = i;

            sum+=i;
            check = 0;
        }
    }

    if(sum != 0) cout << sum << endl << m;
    else cout << -1;

    return 0;
}