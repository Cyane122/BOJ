#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 17103 골드바흐 파티션 - https://www.acmicpc.net/problem/17103
 * Tier: Silver II
 */

using namespace std;

bool isPrime[1000002];
vector<int> v;

int goldBach(int N) {
    int r = 0;
    for(int i = 2; i <= N/2; i++) {
        if(isPrime[i] && isPrime[N-i]) r++;
    }

    return r;
}

int main() {
    fastio;

    int T, M = 0; cin >> T;
    for(int i = 0; i < T; i++) {
        int k; cin >> k;
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

    for(int i : v) cout << goldBach(i) << endl;

    return 0;
}