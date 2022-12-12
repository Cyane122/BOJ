#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1929 소수 구하기 - https://www.acmicpc.net/problem/1929
 */

using namespace std;



int main() {
    fastio;

    int N, M; cin >> N >> M;
    bool isPrime[1000002];
    for(int i = 1; i <= M; i++) {
        isPrime[i] = true;
    }
    isPrime[1] = false;
    for(int i = 2; i <= sqrt(M); i++) {
        if(isPrime[i]) {
            for(int j = i*2; j <= M; j+=i) isPrime[j] = false;
        }
    }

    for(int i = N; i <= M; i++) if(isPrime[i]) cout << i << endl;

    return 0;
}