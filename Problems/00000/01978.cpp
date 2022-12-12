#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1978 소수 찾기 - https://www.acmicpc.net/problem/1978
 */

using namespace std;

int num[100];

int main() {
    fastio;

    int N; cin >> N;
    int r = 0;
    for(int i = 0; i < N; i++) {
        cin >> num[i];
        if(num[i] == 1) {
            r++;
            continue;
        }
        for(int j = 2; j < num[i]-1; j++) {
            if(num[i]%j == 0 && num[i] != j) {
                r++;
                break;
            }
        }
    }
    cout << (N-r);
    return 0;
}