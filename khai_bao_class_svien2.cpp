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
		string name, classroom, date;
		float gpa;
 
	public:
		void processDate();
		void processName();
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};

void SinhVien :: processName() {
	transform(name.begin(), name.end(), name.begin(), :: tolower);
	stringstream ss(name);
	string token;
	vector <string> a;
	while(ss >> token)
		a.push_back(token);
	name.clear();
	for (int i = 0; i < a.size(); ++i) {
		a[i][0] -= 32;
		name += a[i] + " ";
	}
}

void SinhVien :: processDate() {
	if(date[1] == '/')
		date.insert(date.begin(), '0');
	if(date[4] == '/')
		date.insert(date.begin() + 3, '0');
}
 
istream &operator >> (istream &in, SinhVien &a) {
	getline(in, a.name);
	in >> a.classroom >> a.date >> a.gpa;
	a.processDate();
	a.processName();
	return in;
}
 
ostream &operator << (ostream &out, SinhVien a) {
	out << "B20DCCN001 " << a.name << a.classroom << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
 
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}