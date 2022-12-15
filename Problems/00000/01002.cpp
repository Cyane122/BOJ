#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1002 터렛 - https://www.acmicpc.net/problem/1002
 * Tier: Silver 3
 */

using namespace std;

int main() {
    fastio;

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if(x1 == x2 && y1 == y2 && r1 == r2) {
            cout << -1 << endl;
            continue;
        }


        int distance2 = (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
        if(distance2 > (r1+r2)*(r1+r2)) cout << 0;
        else if (distance2 == (r1+r2)*(r1+r2)) cout << 1;
        else if (distance2 > (r1-r2)*(r1-r2)) cout << 2;
        else if (distance2 == (r1-r2)*(r1-r2)) cout << 1;
        else if (distance2 < (r1-r2)*(r1-r2)) cout << 0;

        cout << endl;
    }


    return 0;
}