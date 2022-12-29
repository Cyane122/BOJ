#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1789 수들의 합 - https://www.acmicpc.net/problem/1789
 * Tier: Silver V
 */

long long sol(long long S) {
    long long ans;
    long long lft = 1; long long right = S;
    while(lft <= right) {
        long long mid = (lft + right)/2;
        if((mid+1)*mid/2 > S) right = mid-1;
        else {
            ans = mid;
            lft = mid + 1;
        }
    }
    return ans;
}

int main() {
    fastio;
    long long int N; cin >> N; cout << sol(N);
    return 0;
}