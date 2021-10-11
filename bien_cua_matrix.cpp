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
int a[100][100];

void Input() {
    cin >> n;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
}

void Solve() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << a[i][j] << " ";
            else cout << "  ";
        cout << endl;
    }
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
