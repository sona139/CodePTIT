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

int cnt = 1;

class GV {
	private:	
		string inputSubject;
	
	public:
		string name, subject, fullName;
		int id;
		void processSubject();
		void processFullname();
		friend istream &operator >> (istream &in, GV &a);
		friend ostream &operator << (ostream &out, GV a);
};

void GV :: processSubject() {
	subject += inputSubject[0];
	for (int i = 1; i < inputSubject.size(); ++i)
		if(inputSubject[i] == ' ')
			subject += inputSubject[i+1];
	for (int i = 0; i < subject.size(); ++i)
		if(subject[i] >= 'a')
			subject[i] -= 32;
}

void GV :: processFullname() {
	fullName = name;
	for (int i = 0; i < fullName.size(); ++i)
		if(fullName[i] >= 'a')
			fullName[i] -= 32;	
}

istream &operator >> (istream &in, GV &a) {
	getline(in, a.name);
	getline(in, a.inputSubject);
	a.id = cnt++;
	a.processSubject();
	a.processFullname();
	return in;
}

ostream &operator << (ostream &out, GV a) {
	if(a.id < 10) out << "GV0" << a.id << " ";
	else out << "GV" << a.id << " ";
	out << a.name << " " << a.subject << endl;
	return out;
}

int n;
GV a[100];

void Input() {
	cin >> n;
	scanf("\n");
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

string fix(string res) {
	for (int i = 0; i < res.size(); ++i)
		if(res[i] >= 'a')
			res[i] -= 32;
	return res;
}

bool canOut(int j, string res) {
	return a[j].fullName.find(res) != string::npos;
}

void Solve() {
	int m;
	string res;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> res;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << res << ":\n";
		res = fix(res);
		for (int j = 0; j < n; ++j)
			if(canOut(j, res))
				cout << a[j];
	}
}

int main() {
	Input();
	Solve();
	return 0;
}
