#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2004 조합 0의 개수 - https://www.acmicpc.net/problem/2004
 * Tier: Silver 2
 */

using namespace std;


pair<long long int, long long int> fun(long long k) {
    long long c2 = 0, c5 = 0;

    for(long long i = 2; i <= k; i *= 2) {
        if(k%i == 0) c2 += k/i;
        else break;
    }
    for(long long i = 5; i <= k; i *= 5) {
       if(k%i == 0) c5 += k/i;
       else break;
    }

    return {c2, c5};
}

int main() {
    fastio;

    long long int N, M; cin >> N >> M;

    vector<pair<long long int, long long int>> v(3);
    v[0] = fun(N);
    v[1] = fun(M);
    v[2] = fun(N-M);


    cout << min(v[0].first - v[1].first - v[2].first, v[0].second - v[1].second - v[2].second) << endl;

    return 0;
}