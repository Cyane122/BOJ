#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9506 약수들의 합 - https://www.acmicpc.net/problem/9506
 * Tier: Bronze I
 */

int main() {
    fastio;
    while(true) {
        int N, res = 0; vector<int> v; cin >> N; if(N == -1) break;
        for(int i = 1; i < N; i++) {
            if(N%i == 0) {
                res += i;
                v.push_back(i);
            }
        }
        if(res == N) {
            cout << N << " = " << v[0];
            for(int i = 1; i < v.size(); i++) {
                cout << " + " << v[i];
            }
            cout << endl;
        } else {
            cout << N << " is NOT perfect." << endl;
        }
    }
    return 0;
}