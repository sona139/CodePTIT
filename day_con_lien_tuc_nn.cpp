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

int n, k;
int a[nMax];

void Input() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];    
}

void Solve() {
    deque <int> dp;
    int temp = 0;
    int ans = in;
    for (int i = 0; i < n; ++i) {
        temp += a[i];
        dp.push_back(a[i]);
        while(dp.size() && temp - dp.front() > k) {
            temp -= dp.front();
            dp.pop_front();
        }
        if(temp > k && ans > dp.size())
            ans = dp.size();
    }
    ans == in ? cout << -1 : cout << ans;
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
