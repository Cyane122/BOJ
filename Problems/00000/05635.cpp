#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 5635 생일 - https://www.acmicpc.net/problem/5635
 * Tier: Silver V
 */

struct birth {
    string name;
    int y, m, d;
};

int N; vector<birth> v;

bool amp(const birth& a, const birth& b) {
    if(a.y < b.y) return true;
    else {
        if(a.y == b.y) {
            if(a.m < b.m) return true;
            else {
                if(a.m == b.m) {
                    if(a.d < b.d) return true;
                }
            }
        }
    }
    return false;
}

int main() {
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++) {
        string K; int A, B, C;
        cin >> K >> A >> B >> C;
        v.push_back({K, C, B, A});
    }
    sort(v.begin(), v.end(), amp);
    cout << v[N-1].name << endl << v[0].name;
    return 0;
}