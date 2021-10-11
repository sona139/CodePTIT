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

class SinhVien {
	private:
		string name, mail;
	
	public:
		string id, Class;
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};

istream &operator >> (istream &in, SinhVien &a) {
	in >> a.id;
	scanf("\n");
	getline(in, a.name);
	in >> a.Class >> a.mail;
	return in;
}

ostream &operator << (ostream &out, SinhVien a) {
	out << a.id << " " << a.name << " " << a.Class << " " << a.mail << endl;
	return out;
}

SinhVien a[1000];
int n;

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

bool CanOut(int j, string res) {
	if(a[j].id[5] == 'C' || a[j].id[5] == 'A')
		return a[j].id[5] == res[0] && a[j].Class[0] != 'E';
	return a[j].id[5] == res[0];
}

string fix(string res) {
	if(res == "Ke toan")
		return "KE TOAN";
	if(res == "Cong nghe thong tin")
		return "CONG NGHE THONG TIN";
	if(res == "An toan thong tin")
		return "AN TOAN THONG TIN";
	if(res == "Vien thong")
		return "VIEN THONG";
	return "DIEN TU";
}

void Solve() {
	int m;
	cin >> m;
	string res;
	scanf("\n");
	for (int i = 0; i < m; ++i) {
		getline(cin, res);
		res = fix(res);
		cout << "DANH SACH SINH VIEN NGANH " << res << ":" << endl;
		for (int j = 0; j < n; ++j)
			if(CanOut(j, res))
				cout << a[j];
	}
}

int main() {
	Input();
	Solve();
	return 0;
}