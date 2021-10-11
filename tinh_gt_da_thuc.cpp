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
const int nMax = 2001;

int n, x;
int a[nMax];

void Input() {
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}

void Solve() {
    ll temp = 1LL, ans = 0;
    for (int i = n-1; i >= 0; --i) {
        ans += temp*a[i];
        temp *= x;
        ans %= Mod;
        temp %= Mod;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
