/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI 3.141592653589793238
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

struct p {
	db x, y;
};

struct p a[3];

void Input() {
	for (int i = 0; i < 3; ++i)
		cin >> a[i].x >> a[i].y;
}

db length(struct p a, struct p b) {
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

db dt(db a, db b, db c) {
	return sqrt((a + b + c)*(a + b - c)*(a - b + c)*(b - a + c))/4;
}

bool ok(db a, db b, db c) {
	if(a + b > c && a + c > b && b + c > a)
		return true;
	return false;	
}

void Solve() {
	db c1 = length(a[0], a[1]);
	db c2 = length(a[0], a[2]);
	db c3 = length(a[1], a[2]);
	if(!ok(c1, c2, c3)) cout << "INVALID";
	else {
		db s = dt(c1, c2, c3);
		db r = c1*c2*c3/(4 * s);
		cout << fixed << setprecision(3) << PI*r*r;
	}
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
