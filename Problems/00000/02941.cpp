#include <bits/stdc++.h>

#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
/**
 * BOJ 2941 크로아티아 알파벳 - https://www.acmicpc.net/problem/2941
 * Tier: Silver 5
 */

using namespace std;

int main() {
    fastio;

    string str; cin >> str;
    int res = 0;
    for(int i = 0; i < str.length(); i++) {
        if((i < str.length() - 1) && (str[i] == 'c' || str[i] == 'z' || str[i] == 's') && str[i+1] == '=') {
            i++;
            res++;
        } else if ((i < str.length() - 1) && (str[i] == 'l' || str[i] == 'n') && (str[i+1] == 'j')) {
            i++;
            res++;
        } else if ((i < str.length() - 1) && (str[i] == 'd' || str[i] == 'c') && str[i+1] == '-') {
            i++;
            res++;
        } else if ((i < str.length() - 2) && str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            i+=2;
            res++;
        } else {
            res++;
        }
    }

    cout << res;

    return 0;
}