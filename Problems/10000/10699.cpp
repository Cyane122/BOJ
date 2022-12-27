#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10699 오늘 날짜 - https://www.acmicpc.net/problem/10699
 * Tier: Bronze V
 */

int main() {
    fastio;
    time_t timer;
    struct tm* t;
    timer = time(NULL);
    t = localtime(&timer);
    cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday;
    return 0;
}