#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 15596 정수 N개의 합 - https://www.acmicpc.net/problem/15596
 * Tier: Bronze II
 * NOTICE: 함수 구현 문제
 */

using namespace std;

long long int sum(vector<int> &a) {
    long long int t = 0;
    for(long long int k: a) t+=k;

    return t;
}

int main() {
    fastio;

    return 0;
}