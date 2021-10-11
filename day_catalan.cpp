#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int mod= 2e5+5;
int n, s[mod];
int a[mod], temp;
void cong(int x, int nho)
{
	for (int i = 2; i * i <= x; i++)
	{
		while (x % i == 0)
		{
			s[i] += nho;
			x /= i;
		}
	}
	if (x != 1)
		s[x] += nho;
}
void nhan(int x)
{
	temp += 5;
	for(int i=0; i<temp; i++)
	{
		a[i]*= x;
	}
	for(int i = 0; i<temp; i++)
	{
		a[i + 1] += a[i] / 10;
		a[i] %= 10;
	}
	while(temp > 0&&!a[temp-1])
		temp--;
}
int main(){
	cin >> n;
	n++;
	for (int i = 1; i <= n; i++)
		cong(2 * n - i + 1, 1);
	for (int i = 1; i <= n + 1; i++)
		cong(i, -1);
	a[0] = temp= 1;
	for (int i = 1; i < mod; i++)
	{
		while (s[i]--)
		{
			nhan(i);
		}
	}
	for (int i = temp-1;i>=0; i--)
		cout<<a[i];
}