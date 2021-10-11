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

int n, R, G, B;
ll gt[21];

void gt__() {
    gt[0] = 1;
    for(int i = 1; i <= 20; ++i)
        gt[i] = gt[i-1]*i;
}

void Input() {
    cin >> n >> R >> G >> B;
}

void Solve() {
    ll ans = 0;
    for (int i = R; i <= n - G - B; ++i)
        for (int j = G; j <= n - i - B; ++j) {
            int k = n - i - j;
            ans += gt[n]/(gt[i]*gt[j]*gt[k]);
        }
    cout << ans << endl;
}

int main() {
    faster();
    gt__();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
