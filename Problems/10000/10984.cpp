#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10984 내 학점을 구해줘 - https://www.acmicpc.net/problem/10984
 * Tier: Bronze III
 */

int T, S = 0, N; double G = 0.0;

int main() {
    fastio;
    cout << fixed;
    cout.precision(1);
    cin >> T;
    while(T--) {
        cin >> N;
        for(int i = 0; i < N; i++) {
            int A; double B;
            cin >> A >> B;
            S += A; G += B*A;
        }
        cout << S << " " << G/S << endl;
        S = 0;
        G = 0;
    }
    return 0;
}