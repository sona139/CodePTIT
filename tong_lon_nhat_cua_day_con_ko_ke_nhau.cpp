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

int n;
int a[nMax];

void Input() {
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
}

void Solve() {
    ll dp[2][n+1];
    dp[0][0] = 0;
    dp[1][0] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[0][i] = max(dp[0][i-1], dp[1][i-1]);
        dp[1][i] = dp[0][i-1] + a[i];
    }
    cout << max(dp[0][n], dp[1][n]) << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
