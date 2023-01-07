#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 15803 PLAYERJINAH'S BOTTLEGROUNDS - https://www.acmicpc.net/problem/15803
 * Tier: Silver V
 */

int main() {
    fastio;
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    if(a*d + c*f + e*b - b*c - d*e - a*f == 0) cout << "WHERE IS MY CHICKEN?";
    else cout << "WINNER WINNER CHICKEN DINNER!";
    return 0;
}