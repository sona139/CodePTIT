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

struct point {
	int x, y;
};

int n;
struct point a[1000];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i].x >> a[i].y;
}

db _distance(int a, int b, int c, int d) {
	return sqrt((c - a)*(c - a) + (d - b)*(d - b));
}

db S(int i, int j, int k) {
	db ab = _distance(a[i].x, a[i].y, a[j].x, a[j].y);
	db ac = _distance(a[i].x, a[i].y, a[k].x, a[k].y);
	db bc = _distance(a[k].x, a[k].y, a[j].x, a[j].y);
	return sqrt((ab+ac+bc)*(ab+ac-bc)*(ab-ac+bc)*(ac-ab+bc))/4;
}

void Solve() {
	db ans = 0;
	for (int i = 0; i < n-2; ++i)
		ans += S(0, i+1, i+2);
	cout << fixed << setprecision(3) << ans << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}