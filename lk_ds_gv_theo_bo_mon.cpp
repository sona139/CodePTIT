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
		string name, subject;
		int id;
		void processSubject();
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

istream &operator >> (istream &in, GV &a) {
	getline(in, a.name);
	getline(in, a.inputSubject);
	a.id = cnt++;
	a.processSubject();
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

string fix(string sb) {
	string temp;
	temp +=sb[0];
	for (int i = 1; i < sb.size(); ++i)
		if(sb[i] == ' ')
			temp += sb[i+1];
	for (int i = 0; i < temp.size(); ++i)
		if(temp[i] >= 'a')
			temp[i] -= 32;
	return temp;
}

bool canOut(int j, string sb) {
	return a[j].subject == sb;
}

void Solve() {
	int m;
	cin >> m;
	scanf("\n");
	string sb;
	for (int i = 0; i < m; ++i) {
		getline(cin, sb);
		sb = fix(sb);
		cout << "DANH SACH GIANG VIEN BO MON " << sb << ":" << endl;
		for (int j = 0; j < n; ++j)
			if(canOut(j, sb))
				cout << a[j];
	}
}

int main() {
	Input();
	Solve();
	return 0;
}
