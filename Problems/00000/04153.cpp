#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 4153 직각삼각형 - https://www.acmicpc.net/problem/4153
 * Tier: Bronze 3
 */

using namespace std;

int main() {
    fastio;

    int a, b, c;
    do {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        if((sqrt(a*a + b*b) == c) || sqrt(b*b + c*c) == a || sqrt(c*c + a*a) == b) cout << "right" << endl;
        else cout << "wrong" << endl;
    } while (a != 0 && b != 0 && c != 0);

    return 0;
}