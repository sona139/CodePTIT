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
const int nMax = 1e4 + 1;

int n;
int sang[nMax] = {0};

void sang_() {
    sang[1] = 1;
    for (int i = 2; i < nMax; ++i)
        if(sang[i] == 0) {
            for (int j = i; j < nMax; j += i)
                if(sang[j] == 0)
                    sang[j] = i;
        }
}

void Input() {
    cin >> n;
}

void Solve() {
    for (int i = 1; i <= n; ++i)
        cout << sang[i] << " ";
    cout << endl;
}

int main() {
    faster();
    sang_();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
