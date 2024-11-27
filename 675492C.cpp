#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	string s;
	int count = n, flag = 0;
	while (m--)
	{
		cin >> s;
		if (s == "out")
			count--;
		else
			count++;
		if (count < 4)
			flag = 1;
	}
	(flag) ? cout << "YES\n" : cout << "NO\n";
}