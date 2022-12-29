#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10039 평균 점수 - https://www.acmicpc.net/problem/10039
 * Tier: Bronze IV
 */

int main() {
    fastio;
    int sum = 0; int k;
    for(int i = 0; i < 5; i++) {
        cin >> k;
        if(k < 40) sum += 40;
        else sum += k;
    }
    cout << sum/5;
    return 0;
}