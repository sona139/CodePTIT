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
const int nMax = 1e5 + 1;

int n, m;
int a[100][100];

void Input() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
}

void Solve() {
    int row = 0, col = 0, N = n, M = m;
    int ans[105][105];
    while(row < n/2) {
        for (int i = col + 1; i < M; ++i)
            ans[row][i] = a[row][i-1];
        for (int i = row + 1; i < N; ++i)
            ans[i][M-1] = a[i-1][M-1];
        for (int i = M-2; i >= col; --i)
            ans[N-1][i] = a[N-1][i+1];
        for (int i = N-2; i >= row; --i)
            ans[i][col] = a[i+1][col];
        ++row;
        ++col;
        --N;
        --M;
    }
    if(n%2 && n == m)
        ans[n/2][m/2] = a[n/2][m/2];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cout << ans[i][j] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
