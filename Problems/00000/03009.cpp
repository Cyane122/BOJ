#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 3009 네 번째 점 - https://www.acmicpc.net/problem/3009
 * Tier: Bronze 3
 */

using namespace std;

int code[4][2];

int main() {
    fastio;

    int x1, x2, x3, y1, y2, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int X, Y;
    if(x1 == x2) X = x3;
    else if (x2 == x3) X = x1;
    else if (x3 == x1) X = x2;

    if(y1 == y2) Y = y3;
    else if (y2 == y3) Y = y1;
    else if (y3 == y1) Y = y2;

    cout << X << " " << Y;

    return 0;
}