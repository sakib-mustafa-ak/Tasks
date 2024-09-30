#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; ++tc)
	{
		cout << "Case " << tc << ": ";

		int n, k;
		cin >> n >> k;

		std::vector<int> ans(n + 1), a, b, c;

		cin >> ans[0];
		int mx ;
		int sum = ans[0];
		for (int i = 1; i < n + 1; ++i)
		{
			cin >> ans[i];
			sum += ans[i];
		}

		int l = *max_element(ans.begin(),ans.end());
		int h = sum;
		int mid, mx2;
		mx = 0;
		while (l <= h)
		{
			mid = (l + h) / 2;
			int sum2 = 0;
			for (int i = 0; i <= n; ++i)
			{
				if (sum2 + ans[i] > mid)
				{
					a.push_back(sum2);
					sum2 = 0;
				}
				sum2 += ans[i];
				if (mx < sum2)
					mx = sum2;
			}
			a.push_back(sum2);
			if (a.size() <= k + 1)
			{
				b = a;
				mx2 = mx;
				h = mid - 1;
			}
			else
				l = mid + 1;
			a.clear();
			mx = 0;
		}

		if (b.size() == k)
		{
			int x = 0, idx = n;
			while (x == 0)
			{
				x = b.back() - ans[idx];
				b.pop_back();
				c.push_back(ans[idx]);
				idx--;
			}
			c.push_back(x);
			for (int i = c.size() - 1; i >= 0; --i)
				b.push_back(c[i]);
		}

		mx2 = *max_element(b.begin(), b.end());
		cout << mx2 << endl;

		for (int i = 0; i < b.size(); ++i)
			cout << b[i] << endl;
	}
}
