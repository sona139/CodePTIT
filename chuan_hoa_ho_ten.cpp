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
string a;

void Input() {
	cin >> n;
	cin.ignore();
	getline(cin, a);
}

void Solve() {
	for (int i = 0; i < a.size(); ++i)
		if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	stringstream ss(a);
	string token;
	vector <string> name;
	while(ss >> token) {
		token[0] -= 32;
		name.push_back(token);
	}
	int s = name.size();
	if(n == 1) {
		cout << name[s-1];
		for (int i = 0; i < s-1; ++i)
			cout << " " << name[i];
	}
	else {
		for (int i = 1; i < s; ++i)
			cout << name[i] << " ";
		cout << name[0];
	}
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
