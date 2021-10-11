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

bool cmp(int a, int b) {
    return a > b;
}

void Input() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}

void Solve() {
    int x2 = 0, ans = 0;
	for (int i = 0; i < n; ++i) {
		int x2_temp = 0;
		while(a[i]) {
			if(a[i]%2) {
				--a[i];
				++ans;
			}
			else {
				++x2_temp;
				a[i] /= 2;
			}
			x2 = max(x2, x2_temp);
		}
	}
	cout << ans + x2 << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
