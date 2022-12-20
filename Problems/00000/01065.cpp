#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 1065 한수 - https://www.acmicpc.net/problem/1065
 * Tier: Silver IV
 */

using namespace std;

int N, res = 0;

void fun(int i) {
    if(i < 100) res++;
    else {
        int digit[3] = {(i/100)%10, (i/10)%10, i%10};
        if((digit[1] - digit[0] == digit[2] - digit[1])) res++;
    }
    if(i < N) fun(++i);
    else return;
}

int main() {
    fastio;

    cin >> N;
    fun(1);
    if(N == 1000) res--;
    cout << res;

    return 0;
}