#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 2490 윷놀이 - https://www.acmicpc.net/problem/2490
 * Tier: Bronze III
 */

int main() {
    fastio;
    for(int i = 0; i < 3; i++) {
        int A, B, C, D; cin >> A >> B >> C >> D;
        switch(A+B+C+D) {
            case 0: cout << "D"; break;
            case 1: cout << "C"; break;
            case 2: cout << "B"; break;
            case 3: cout << "A"; break;
            case 4: cout << "E"; break;
        }
        cout << endl;
    }
    return 0;
}