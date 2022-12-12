#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 1436 영화감독 숌 -  https://www.acmicpc.net/problem/1436
 */

using namespace std;

int fun(int N) {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int cnt = 0, num = 0;
    while(true) {
        num++;
        int temp = num;
        while(temp > 0) {
            if(temp%1000 == 666) {
                cnt++;
                break;
            } else temp /= 10;
        }
        if(cnt == N) break;
    }

    cout << num;

    return 0;
}
