#include <bits/stdc++.h>

#define endl "\n"
/**
 * BOJ 7568 덩치 -  https://www.acmicpc.net/problem/7568
 */

using namespace std;

struct body {
    int kg;
    int height;
};

body peoples[51];
int r[51];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> peoples[i].kg >> peoples[i].height;
        r[i] = 0;
    }

    for(int i = 0; i < N-1; i++) {
        r[i]++;
        for(int j = i+1; j < N; j++) {
            if(peoples[i].kg > peoples[j].kg && peoples[i].height > peoples[j].height) {
                r[j]++;
            } else if (peoples[i].kg < peoples[j].kg && peoples[i].height < peoples[j].height) {
                r[i]++;
            }
        }
    }
    r[N-1]++;
    for(int i = 0; i < N; i++) cout << r[i] << " ";

    return 0;
}