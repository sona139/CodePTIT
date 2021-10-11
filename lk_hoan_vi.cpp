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

int mark[21] = {0};
int n;
vector <int> a;

void Input() {
    cin >> n;
}

void xuat() {
    for (int i = 0; i < n; ++i)
        cout << a[i];
    cout << " ";
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if(mark[j] == 0) {
            a.push_back(j);
            mark[j] = 1;
            if(i == n)
                xuat();
            else Try(i + 1);
            mark[j] = 0;
            a.pop_back();
        }
    }
}

void Solve() {
    Try(1);
    cout << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
