#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 6588 골드바흐의 추측 - https://www.acmicpc.net/problem/6588
 * Tier: Silver I
 */

using namespace std;

bool isPrime[1000002];
vector<int> v;

pair<int, int> goldBach(int N) {
    for(int i = 2; i <= N/2; i++) {
        if(isPrime[i] && isPrime[N-i]) return {i, N-i};
    }

    return {0, 0};
}
int main() {
    fastio;

    int k, M = 0;
    for(;;) {
        cin >> k;
        if(k == 0) break;
        v.push_back(k);
        M = max(M, k);
    }

    for(int i = 1; i <= M; i++) isPrime[i] = true;

    isPrime[1] = false;

    for(int i = 2; i <= sqrt(M); i++) {
        if(isPrime[i]) {
            for(int j = i*2; j <= M; j += i) isPrime[j] = false;
        }
    }

    for(int i: v) {
        pair<int, int> g = goldBach(i);

        if(g.first == 0 && g.second == 0) cout << "Goldbach's conjecture is wrong." << endl;
        else {
            cout << i << " = " << g.first << " + " << g.second << endl;
        }
    }

    return 0;
}