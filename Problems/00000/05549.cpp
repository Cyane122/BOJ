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
 * BOJ 5549 행성 탐사 - https://www.acmicpc.net/problem/5549
 * Tier: Gold V
 */

struct Area {
    int jungle;
    int sea;
    int ice;

    Area operator+(const Area &a) const {
        return {jungle + a.jungle, sea + a.sea, ice + a.ice};
    }

    Area operator-(const Area &a) const {
        return {jungle - a.jungle, sea - a.sea, ice - a.ice};
    }
};

int M, N, K, A, B, C, D; char c; Area area[1002][1002], areas[4];

int main() {
    fastio;
    cin >> M >> N >> K;
    for(int i = 0; i <= M; i++) {
        for(int j = 0; j <= N; j++) {
            if(i == 0 || j == 0) area[i][j] = {0, 0, 0};
            else {
                area[i][j] = area[i-1][j] + area[i][j-1] - area[i-1][j-1];
                cin >> c;
                if(c == 'J') {
                    area[i][j] = {area[i][j].jungle + 1, area[i][j].sea, area[i][j].ice};
                } else if (c == 'O') {
                    area[i][j] = {area[i][j].jungle, area[i][j].sea + 1, area[i][j].ice};
                } else if (c == 'I'){
                    area[i][j] = {area[i][j].jungle, area[i][j].sea, area[i][j].ice + 1};
                }
            }
        }
    }
    wh(K) {
        cin >> A >> B >> C >> D;

        areas[0] = area[A-1][B-1];
        areas[1] = area[C][D];
        areas[2] = area[C][B-1];
        areas[3] = area[A-1][D];

        Area newArea = areas[0] + areas[1] - areas[2] - areas[3];

        cout << newArea.jungle << " " << newArea.sea << " " << newArea.ice << endl;

    }
    return 0;
}