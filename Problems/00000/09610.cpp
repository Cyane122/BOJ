#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 9610 사분면 - https://www.acmicpc.net/problem/9610
 * Tier: Bronze III
 */

int main() {
    fastio;
    int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0, T; cin >> T;
    for(int i = 0; i < T; i++) {
        int X, Y; cin >> X >> Y;
        if(X * Y == 0) AXIS++;
        else {
            if(X > 0 && Y > 0) Q1++;
            else if (X > 0 && Y < 0) Q4++;
            else if (X < 0 && Y > 0) Q2++;
            else Q3++;
        }
    }
    cout << "Q1: " << Q1 << endl << "Q2: " << Q2 << endl << "Q3: " << Q3 << endl << "Q4: " << Q4 << endl << "AXIS: " << AXIS;
    return 0;
}