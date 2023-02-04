#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)

using namespace std;

/**
 * BOJ 10974 모든 순열 - https://www.acmicpc.net/problem/10974
 * Tier: Silver I
 */

int N; bool used[10]; vi v;

void DFS() {
    if(v.size() == N) {
        for(int k: v) cout << k << " ";
        cout << endl;
        return;
    }
    for(int i = 1; i <= N; i++) {
        if(!used[i]) {
            used[i] = true;
            v.push_back(i);
            DFS();
            v.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    fastio;
    cin >> N;
    fri(N+1) {
        used[i] = false;
    }
    DFS();
    return 0;
}