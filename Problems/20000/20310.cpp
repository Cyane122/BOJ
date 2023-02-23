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
#define cinV(v, type) type p; cin >> p; v.push_back(p)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int>>

using namespace std;

/**
 * BOJ 20310 타노스 - https://www.acmicpc.net/problem/20310
 * Tier: Silver III
 */

string s; int zero = 0, one = 0, L; bool use[1000];

int main() {
    fastio;
    cin >> s; L = s.size();
    for(char c: s) {
        if(c == '0') zero++;
        if(c == '1') one++;
    }
    zero/=2;
    one/=2;
    for(int i = 0; i < L; i++) {
        if(one > 0 && s[i] == '1') {
            use[i] = true;
            one--;
        }
    }
    for(int i = L-1; i >= 0; i--) {
        if(zero > 0 && s[i] == '0') {
            use[i] = true;
            zero--;
        }
    }
    for(int i = 0; i < L; i++) {
        if(!use[i]) cout << s[i];
    }
    return 0;
}