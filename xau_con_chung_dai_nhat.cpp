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

string a, b;

void Input() {
    cin >> a >> b;
}

void Solve() {
    int sa = a.size(), sb = b.size();
    string dp[sa + 1][sb + 1];
    for (int i = 1; i <= sa; ++i)
        for (int j = 1; j <= sb; ++j)
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + a[i-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    cout << dp[sa][sb];
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
