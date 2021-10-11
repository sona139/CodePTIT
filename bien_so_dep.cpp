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

string s;

void Input() {
	cin >> s;
}

bool tang(string a) {
	for (int i = 0; i < 4; ++i)
		if(a[i+1] <= a[i])
			return false;
	return true;
}

bool trung(string a) {
	if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4])
		return true;
	return false;
}

bool loc_phat(string a) {
	for (int i = 0; i < 5; ++i)
		if(a[i] != '6' && a[i] != '8')
			return false;
	return true;
}

void Solve() {
	string a;
	for (int i = 5; i < 11; ++i)
		if(i != 8)
			a.push_back(s[i]);
	if(tang(a) || trung(a) || loc_phat(a))
		cout << "YES";
	else cout << "NO"; 
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
