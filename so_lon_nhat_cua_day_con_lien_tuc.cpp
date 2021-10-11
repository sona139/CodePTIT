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
    deque <int> ans;
    vector <int> Max;
    for (int i = 0; i < n; ++i) {
        while(ans.size() && a[ans.back()] <= a[i])
            ans.pop_back();
        ans.push_back(i);
        if(ans.front() + k <= i)
            ans.pop_front();
        if(i >= k-1)
            Max.push_back(a[ans.front()]);
    }
    for (int i = 0; i <= n - k; ++i)
        cout << Max[i] << " ";
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
