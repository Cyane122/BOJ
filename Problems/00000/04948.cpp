#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 4948 베르트랑 공준 - https://www.acmicpc.net/problem/4948
 * NOT FINISHED
 */

using namespace std;
bool isPrime[123457];
list<int> numList;

int main() {
    fastio;
    int N, M = 0; cin >> N;
    while(N != 0) {
        M = max(M, N);
        numList.push_back(N);
        cin >> N;
    }

    for(int i = 1; i <= M; i++) {
        isPrime[i] = true;
    }
    isPrime[1] = false;
    for(int i = 2; i <= sqrt(M); i++) {
        if(isPrime[i]) {
            for(int j = i*2; j <= M; j+=i) isPrime[j] = false;
        }
    }

    for(int i : numList) {
        int cnt = 0;
        for(int j = i+1; j <= 2*i; j++) {
            if(isPrime[j]) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}