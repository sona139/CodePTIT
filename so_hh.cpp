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

ll shh[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
ll n;

void Input() {
	cin >> n;
}

bool check() {
	for (int i = 0; i < 8; ++i)
		if(shh[i] == n)
			return true;
	return false;
}

void Solve() {
	cout << check() << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
