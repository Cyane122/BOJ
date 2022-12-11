#include <bits/stdc++.h>

/**
 * BOJ 11651 좌표 정렬하기 2 - https://www.acmicpc.net/problem/11651
 */

using namespace std;

struct code {
    int x;
    int y;
};

code codes[100001];

bool amp(code &code1, code &code2) {
    if(code1.y > code2.y) return false;
    else if (code1.y < code2.y) return true;
    else {
        if(code1.x > code2.x) return false;
        else return true;
    }
}

int main() {
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        codes[i] = {x, y};
    }

    sort(codes, codes+N, amp);

    for(int i = 0; i < N; i++) {
        cout << codes[i].x << " " << codes[i].y << "\n";
    }

    return 0;
}