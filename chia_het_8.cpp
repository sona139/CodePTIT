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

string a;

void Input() {
	cin >> a;
	for (int i = 0; i < a.size(); ++i)
		a[i] -= '0';
}

int modulo() {
	int s = a.size(), cnt = 0;
	for (int i = 0; i < s; ++i) {
		int temp = 0, sum = 0;
		for (int j = i; j < s; ++j) {
			temp *= 10;
			temp += a[j];
			temp %= 8;
			sum += a[j];
			sum %= 3;
			if(!temp && sum) ++cnt;
		}
	}
	return cnt;
}

void Solve() {
	cout << modulo() << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}