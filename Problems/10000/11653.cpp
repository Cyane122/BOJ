#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 11653 소인수분해 - https://www.acmicpc.net/problem/11653
 * Tier: Bronze I
 */

using namespace std;

int main() {
    fastio;

    int N; cin >> N;
    int temp = N;
    for(int i = 2; i <= temp;) {
        if(N == 1) break;
        if(N%i == 0) {
            N /= i;
            cout << i << endl;
        }
        else i++;
    }

    return 0;
}