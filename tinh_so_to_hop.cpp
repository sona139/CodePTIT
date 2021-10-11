/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
#define in INT_MAX
#define im INT_MIN
#define fi first
#define se second
#define vi vector <int>
#define vll vector <ll>
#define pii pair <int, int>
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;
const int nMax = 1e3 + 1;

int n, r;
ll C[nMax][nMax];

void sang_() {
    for (int i = 0; i < nMax; ++i) {
        C[i][i] = 1;
        C[i][0] = 1;
    }
    for (int i = 1; i < nMax; ++i)
        for (int j = 1; j < i; ++j) {
            C[i][j] = C[i-1][j] + C[i-1][j-1];
            C[i][j] %= Mod;
        }
}

void Input() {
    cin >> n >> r;
}

void Solve() {
    cout << C[n][r] << endl;
}

int main() {
    faster();
    sang_();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
