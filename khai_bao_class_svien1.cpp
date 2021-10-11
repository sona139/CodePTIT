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
#define a() a;
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;
 
class SinhVien {
	private:
		string name = "Nguyen Van A", classroom, date;
		float gpa;
 
	public:
		void processDate();
		friend void nhap(SinhVien &a);
		friend void in(SinhVien a);
};

void SinhVien :: processDate() {
	if(date[1] == '/')
		date.insert(date.begin(), '0');
	if(date[4] == '/')
		date.insert(date.begin() + 3, '0');
}
 
void nhap(SinhVien &a) {
	getline(cin, a.classroom);
	cin >> a.classroom >> a.date >> a.gpa;
	a.processDate();
}
 
void in(SinhVien a) {
	cout << "B20DCCN001 " << a.name << " " << a.classroom << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
}
 
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}