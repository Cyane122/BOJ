#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 3036 링 - https://www.acmicpc.net/problem/3036
 * Tier: Silver 4
 */

using namespace std;

int main() {
    fastio;

    int N, r; cin >> N >> r;
    for(int i = 0; i < N-1; i++) {
        int temp = r;
        int k; cin >> k;
        int j = 2;
        while(true) {
            if(temp%j == 0 && k%j == 0) {
                k/=j;
                temp/=j;
            } else j++;
            if(j > min(k, temp)) break;
        }
        cout << temp << "/" << k << endl;
    }

    return 0;
}