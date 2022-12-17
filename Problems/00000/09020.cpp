#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 9020 골드바흐의 추측 - https://www.acmicpc.net/problem/9020
 * Tier: Silver II
 */

using namespace std;

vector<int> v;
bool isPrime[10002];

int main() {
    fastio;

    int T, M = 0; cin >> T;
    for(int i = 0; i < T; i++) {
        int t; cin >> t;
        M = max(t, M);
        v.push_back(t);
    }

    for(int i = 1; i <= M; i++) isPrime[i] = true;
    isPrime[1] = false;

    for(int i = 2; i <= sqrt(M); i++) {
        if(isPrime[i]) {
            for(int j = i*2; j <= M; j += i) isPrime[j] = false;
        }
    }

    for(int i: v) {
        int mid = floor(i/2);
        for(int j = 0; j < floor(i/2); j++) {
            if(isPrime[mid+j] && isPrime[mid-j]) {
                cout << mid-j << " " << mid+j << endl;
                break;
            }
        }
    }

    return 0;
}