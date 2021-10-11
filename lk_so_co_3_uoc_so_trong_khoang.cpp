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
const int nMax = 1e6 + 1;

ll l, r;
bool snt[nMax+1];

void sang() {
	snt[0] = 1;
	snt[1] = 1;
	for (int i = 2; i <= 1e3; ++i)
		if(!snt[i])
			for (int j = i*i; j < nMax; j += i)
				snt[j] = true;
}

void Input() {
	cin >> l >> r;
}

void Solve() {
	if(sqrt(l) == (int)sqrt(l))
		l = sqrt(l);
	else l = sqrt(l) + 1;
	r = sqrt(r);
	int cnt = 0;
	for (int i = l; i <= r; ++i)
		if(!snt[i]) ++cnt;
	cout << cnt << endl;
}

int main() {
	sang();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
