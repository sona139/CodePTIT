/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
#define im INT_MIN
#define fi first
#define se second
#define vi vector <int>
#define vll vector <ll>
#define pii pair <int, int>
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

class DN {
	private:
		string fullName;

	public:
		int slot;
		string name;
		friend istream &operator >> (istream &in, DN &a);	
		friend ostream &operator << (ostream &out, DN a);
};

istream &operator >> (istream &in, DN &a) {
	in >> a.name;
	scanf("\n");
	getline(in, a.fullName);
	in >> a.slot;
	return in;
}

ostream &operator << (ostream &out, DN a) {
	out << a.name << " " << a.fullName << " " << a.slot << endl;
	return out;
}

int n;
DN a[1000];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

bool cmp(DN a, DN b) {
	if(a.slot != b.slot)
		return a.slot > b.slot;
	return a.name < b.name;
}

void Solve() {
	sort(a, a+n, cmp);
	for (int i = 0; i < n; ++i)
		cout << a[i];
}

int main() {
	Input();
	Solve();
	return 0;
}
