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

struct it {
	int id;
	string name, nhom;
	float mua, ban, money;
};

struct it a[100];
int n;

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		a[i].id = i+1;
		scanf("\n");
		getline(cin, a[i].name);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].money = a[i].ban - a[i].mua;
	}
}

bool cmp(struct it a, struct it b) {
	return a.money > b.money;
}

void Solve() {
	sort(a, a+n, cmp);
	for (int i = 0; i < n; ++i)
		cout << a[i].id << " " << a[i].name << " " << a[i].nhom << " " << fixed << setprecision(2) <<  a[i].money << endl;
}

int main() {
	Input();
	Solve();
	return 0;
}
