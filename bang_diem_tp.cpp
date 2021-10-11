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

struct sv {
	string id, name, Class;
	float d1, d2, d3;
};

int n;
struct sv a[100];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i].id;
		scanf("\n");
		getline(cin, a[i].name);
		cin >> a[i].Class >> a[i].d1 >> a[i].d2 >> a[i].d3;
	}
}

bool cmp(struct sv a, struct sv b) {
	return a.id < b.id;
}

void Solve() {
	sort(a, a+n, cmp);
	for (int i = 0; i < n; ++i) {
		cout << i+1 << " " << a[i].id << " " << a[i].name << " " << a[i].Class << " ";
		cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl;
	}
}

int main() {
	Input();
	Solve();
	return 0;
}
