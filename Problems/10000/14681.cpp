#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 14681 사분면 고르기 - https://www.acmicpc.net/problem/14681
 * Tier: Bronze V
 */

using namespace std;

int main() {
    fastio;
    int X, Y; cin >> X >> Y;
    cout << ((X>0)?((Y>0)?1:4):((Y>0)?2:3));
    return 0;
}