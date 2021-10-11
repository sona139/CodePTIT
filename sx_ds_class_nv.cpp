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

class NhanVien {
	private:
		string name, sex, date, accmmodation, fax, time;
		int id;
	
	public:
		friend istream &operator >> (istream &in, NhanVien &a);
		friend ostream &operator << (ostream &out, NhanVien a);	
		vector <string> t;
		string cpy_time;
};

istream &operator >> (istream &in, NhanVien &a) {
	scanf("\n");
	getline(in, a.name);
	in >> a.sex >> a.date;
	scanf("\n");
	getline(in, a.accmmodation);
	in >> a.fax >> a.time;
	a.id = cnt++;
	
	a.cpy_time = a.time;
	for (int i = 0; i < a.cpy_time.size(); ++i)
		if(a.cpy_time[i] == '/')
			a.cpy_time[i] = ' ';
	stringstream ss(a.cpy_time);
	string token;
	while(ss >> token)
		a.t.push_back(token);
	return in;
}

ostream &operator << (ostream &out, NhanVien a) {
	if(a.id > 9) out << "000";
	else out << "0000";
	out << a.id << " " << a.name << " " << a.sex << " " << a.date << " " << a.accmmodation << " " << a.fax << " " << a.time << endl;
	return out;
}

bool cmp(NhanVien a, NhanVien b) {
	if(a.t[2] != b.t[2])
		return a.t[2] < b.t[2];
	if(a.t[0] != b.t[0])
		return a.t[0] < b.t[0];
	return a.t[1] < b.t[1];
}

void sapxep(NhanVien ds[], int n) {
	sort(ds, ds+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
	sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}