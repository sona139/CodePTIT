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
};

istream &operator >> (istream &in, NhanVien &a) {
	scanf("\n");
	getline(in, a.name);
	in >> a.sex >> a.date;
	scanf("\n");
	getline(in, a.accmmodation);
	in >> a.fax >> a.time;
	a.id = cnt++;
	return in;
}

ostream &operator << (ostream &out, NhanVien a) {
	if(a.id > 9) out << "000";
	else out << "0000";
	out << a.id << " " << a.name << " " << a.sex << " " << a.date << " " << a.accmmodation << " " << a.fax << " " << a.time << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}