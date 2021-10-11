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

int n;
vector <int> a;
bool mark[21];

void Input() {
    cin >> n;
}

void xuat() {
    for (int i = 0; i < n; ++i)
        cout << a[i];
    cout << endl;    
}

void sinh_to_hop(int i) {
    for (int j = 1; j <= n; ++j)
        if(!mark[j]) {
            a.push_back(j);
            mark[j] = true;
            if(i == n)
                xuat();
            else sinh_to_hop(i+1);
            mark[j] = false;
            a.pop_back();
        }
}

void Solve() {
    sinh_to_hop(1);
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
