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

class SinhVien {
	private:
		string name, mail, id;
	
	public:
		string Class;
		void nhap();
		void xuat();
};

void SinhVien :: nhap() {
	cin >> id;
	scanf("\n");
	getline(cin, name);
	cin >> Class >> mail;
}

void SinhVien :: xuat() {
	cout << id << " " << name << " " << Class << " " << mail << endl;
}

SinhVien a[1000];
int n;

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i].nhap();
}

void Solve() {
	int m;
	cin >> m;
	string res;
	vector <bool> mark(n);
	for (int i = 0; i < m; ++i) {
		cin >> res;
		cout << "DANH SACH SINH VIEN LOP " << res << ":" << endl;
		for (int j = 0; j < n; ++j)
			if(!mark[j] && a[j].Class == res) {
				mark[j] = true;
				a[j].xuat();
			}
	}
}

int main() {
	Input();
	Solve();
	return 0;
}
