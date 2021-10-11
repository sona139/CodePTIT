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
const int nMax = 1e6 + 1;

int n;
int snt[nMax] = {0};

void sang_NT() {
    snt[0] = 1;
    snt[1] = 1;
    for (int i = 2; i <= 1000; ++i)
        if(snt[i] == 0)
            for (int j = i*i; j < nMax; j += i)
                snt[j] = 1;
}

void Input() {
    cin >> n;
}

int ans() {
    for (int i = 2; i <= n/2; ++i)
        if(snt[i] == 0 && snt[n-i] == 0)
            return i;
    return 1;
}

void Solve() {
    int temp = ans();
    if(temp == 1)
        cout << -1;
    else
        cout << temp << " " << n - temp;
    cout << endl;
}

int main() {
    faster();
    sang_NT();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
