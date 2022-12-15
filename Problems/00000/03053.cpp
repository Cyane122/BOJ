#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

#define PI acos(-1)
/**
 * BOJ 3053 택시 기하학 - https://www.acmicpc.net/problem/3053
 * Tier: Bronze 3
 */

using namespace std;

int main() {
    fastio;

    cout.precision(6);
    cout.setf(ios::fixed);

    int r; cin >> r;
    cout << (double) (PI * r*r) << endl;
    cout << (double) (r*r*2) << endl;

    return 0;
}