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

void Input() {
    cin >> n;
}

string check_NT() {
    if (n < 2)
    return "NO";
    for (int i = 2; i <= sqrt(n); ++i) 
        if(n%i == 0)
            return "NO";
    return "YES";    
}

void Solve() {
    cout << check_NT();
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
