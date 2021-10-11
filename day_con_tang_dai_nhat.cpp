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
vector <int> a;

void Input() {
    cin >> n;
    a.resize(n+1);
    a[0] = im;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void Solve() {
    int dp[n+1], ans = 0;
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        int pos = 0;
        for (int j = 1; j < i; ++j)
            if(a[j] < a[i] && dp[j] > dp[pos])
                pos = j;
        dp[i] = dp[pos] + 1;
        ans = max(ans, dp[i]);
    }
    cout << ans - 1 << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
