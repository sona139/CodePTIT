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

struct human {
	string name, date;
	vector <string> time;
};

int n;
struct human a[100];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i].name >> a[i].date;
		for (int j = 0; j < a[i].date.size(); ++j)
			if(a[i].date[j] == '/')
				a[i].date[j] = ' ';
		stringstream ss(a[i].date);
		string token;
		while(ss >> token)
			a[i].time.push_back(token);
	}
}

bool cmp(struct human a, struct human b) {
	if(a.time[2] > b.time[2])
		return true;
	if(a.time[2] < b.time[2])
		return false;
	if(a.time[1] > b.time[1])
		return true;
	if(a.time[1] < b.time[1])
		return false;
	if(a.time[0] > b.time[0])
		return true;
	if(a.time[0] < b.time[0])
		return false;
}

void Solve() {
	sort(a, a+n, cmp);
	cout << a[0].name << endl << a[n-1].name;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
