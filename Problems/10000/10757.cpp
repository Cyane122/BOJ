#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

/**
 * BOJ 10757 큰 수 A+B - https://www.acmicpc.net/problem/10757
 * Tier: Bronze V
 */

int N, sum;
int num1[10001], num2[10001];
string s1, s2, tmp;
vector<int> ans;

int main() {
    cin >> s1 >> s2;

    if (s1.size() < s2.size()) {
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }

    for (int i = 0; i < s1.size(); i++)
        num1[i + 1] = s1[i] - '0';

    for (int i = 0; i < s2.size(); i++)
        num2[i + 1 + (s1.size()-s2.size())] = s2[i] - '0';

    for (int i = s1.size(); i > 0; i--) {
        sum = num1[i] + num2[i];
        if (sum >= 10) {
            num1[i - 1]++;
            sum -= 10;
        }
        ans.push_back(sum);
    }
    if (num1[0] != 0) cout << 1;

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

}