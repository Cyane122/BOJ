#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 14465 소가 길을 건너간 이유 5 - https://www.acmicpc.net/problem/14465
 * Tier: Silver II
 */

int N, K, B, fix[100002]; bool trafficLight[100002];

int main() {
    fastio;
    cin >> N >> K >> B;
    while(B--) {
        int c; cin >> c;
        trafficLight[c] = true;
    }
    int m = 1000003;
    for(int i = 1; i + K <= N + 1; i++) {
        int t = 0;
        for(int j = i; j < i + K; j++) {
            if(trafficLight[j]) t++;
        }
        m = min(t, m);
    }
    cout << m;
    return 0;
}