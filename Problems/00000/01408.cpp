#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 1408 24 - https://www.acmicpc.net/problem/1408
 * Tier: Bronze II
 */

int H1, H2, M1, M2, S1, S2, R1, R2, R3;

int main() {
    fastio;
    scanf("%d:%d:%d", &H1, &M1, &S1);
    scanf("%d:%d:%d", &H2, &M2, &S2);
    R1 = H2; R2 = M2; R3 = S2;
    if(S2 - S1 < 0) {
        R2--;
        R3 = S2 - S1 + 60;
    } else {
        R3 = S2 - S1;
    }
    if(R2 - M1 < 0) {
        R1--;
        R2 = R2 - M1 + 60;
    } else {
        R2 = R2 - M1;
    }
    if(R1 - H1 < 0) {
        R1 = R1 - H1 + 24;
    } else {
        R1 = R1 - H1;
    }
    printf("%02d:%02d:%02d", R1, R2, R3);
    return 0;
}