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
	int x, y, z;
};

struct point a[4], b[3], c;

void Input() {
	for (int i = 0; i < 4; ++i)
		cin >> a[i].x >> a[i].y >> a[i].z;
}

void process() {
	for (int i = 0; i < 3; ++i) {
		b[i].x = a[i+1].x - a[0].x;
		b[i].y = a[i+1].y - a[0].y;
		b[i].z = a[i+1].z - a[0].z;
	}
	c.x = b[0].z*b[1].y - b[0].y*b[1].z;
	c.y = b[0].x*b[1].z - b[0].z*b[1].x;
	c.z = b[0].y*b[1].x - b[0].x*b[1].y;
}

void Solve() {
	process();
	(b[2].x*c.x + b[2].y*c.y + b[2].z*c.z == 0) ? cout << "YES" : cout << "NO";
	cout << endl;	
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
