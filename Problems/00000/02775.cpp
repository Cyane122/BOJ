#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2775 부녀회장이 될테야 - https://www.acmicpc.net/problem/2775
 * Tier: Bronze I
 */

using namespace std;

int people[20][20];

int main() {
    fastio;

    for(int i = 0; i <= 14; i++) {
        for(int j = 1; j <= 16; j++) {
            if(i == 0) people[i][j] = j;
            else {
                people[i][j] = people[i-1][j] + people[i][j-1];
            }
        }
    }

    int T; cin >> T;
    for(int i = 0; i < T; i++) {
        int K, N; cin >> K >> N;
        cout << people[K][N] << endl;
    }

    return 0;
}