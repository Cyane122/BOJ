#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 4673 셀프 넘버 - https://www.acmicpc.net/problem/4673
 * Tier: Silver V
 */

using namespace std;

bool selfNum[10002];

int d(int n) {
    int k = 0;
    if(n >= 1000) k += n/1000;
    if(n >= 100) k += (n/100)%10;
    if(n >= 10) k += (n/10)%10;
    if(n >= 1) k += n%10;

    return k + n;
}

void fun() {
    for(int i = 1; i <= 10000; i++) {
        if(d(i) > 10000) continue;
        else selfNum[d(i)] = false;
    }
}

int main() {
    fastio;

    for(int i = 1; i <= 10000; i++) {
        selfNum[i] = true;
    }
    fun();
    for(int i = 1; i <= 10000; i++) {
        if(selfNum[i]) cout << i << endl;
    }

    return 0;
}