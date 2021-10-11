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

struct SinhVien {
	string name, Class, date, id;
	float gpa;
};

void nhap(SinhVien &a) {
	getline(cin, a.name);
	cin >> a.Class >> a.date >> a.gpa;
	if(a.date[1] == '/')
		a.date.insert(a.date.begin() + 0, '0');
	if(a.date[4] =='/')
		a.date.insert(a.date.begin() + 3, '0');
	a.id = "B20DCCN001";
}

void in(SinhVien a) {
	cout << fixed << setprecision(2) << a.id << " " << a.name << " " << a.Class << " " << a.date << " " << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
