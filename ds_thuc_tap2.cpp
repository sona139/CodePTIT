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
	int stt;
	string id, name, Class, mail, school;
};

int n, q;
struct sv a[100];
string ip;

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		a[i].stt = i+1;
		cin >> a[i].id;
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].Class >> a[i].mail >> a[i].school;
	}
}

bool cmp(struct sv a, struct sv b) {
	return a.id < b.id;
}

void Solve() {
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> ip;
		vector <struct sv> ans;
		for (int j = 0; j < n; ++j)
			if(a[j].school == ip)
				ans.push_back(a[j]);
		sort(ans.begin(), ans.end(), cmp);
		for (int j = 0; j < ans.size(); ++j)
			cout << ans[j].stt << " " << ans[j].id << " " << ans[j].name << " " << ans[j].Class << " " << ans[j].mail << " " << ans[j].school << endl;
	}
}

int main() {
	Input();
	Solve();
	return 0;
}
