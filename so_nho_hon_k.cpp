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
const int nMax = 1e7 + 1;

int n, k, cnt;
int a[nMax];

void Input() {
    cin >> n >> k;
    cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] <= k)
            ++cnt;
    }
}

void Solve() {
    int bad = 0;
    for (int i = 0; i < cnt; ++i)
        if(a[i] > k)
            ++bad;
    int ans = bad;
    for (int i = cnt; i < n; ++i) {
        if(a[i] > k && a[i-cnt] <= k)
            ++bad;
        else if(a[i] <= k && a[i-cnt] > k)
            --bad;
        ans = min(ans, bad);
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
