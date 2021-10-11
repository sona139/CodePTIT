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

struct SinhVien {
	string msv, name, room, date;
	float gpa;
};

void nhapThongTinSV(struct SinhVien &a) {
	a.msv = "N20DCCN001";
	getline(cin, a.name);
	cin >> a.room >> a.date >> a.gpa;
	if(a.date[1] == '/')
		a.date.insert(a.date.begin(), '0');
	if(a.date[4] == '/')
		a.date.insert(a.date.begin() + 3, '0');
}

void inThongTinSV(struct SinhVien a) {
	cout << a.msv << " " << a.name << " " << a.room << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
