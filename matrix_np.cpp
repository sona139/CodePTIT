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

int n, a[1000][1000];

void Input() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> a[i][j];
}

void Solve() {
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int count1 = 0;
        for (int j = 0; j < 3; ++j)
            if(a[i][j] == 1)
                ++count1;
        if(count1 > 1)   
            ++ans;
    }
    cout << ans;
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
