#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s;
	cin>>n>>s;
	int t;
	cin>>t;
	while(t--)
	{
		string st;
		cin>>st;
		int j = 0;
		int sts = st.size();
		for (int i = 0; i < n&&j<sts; ++i)
		{
			if(st[j]==s[i]||s[i]=='#')
				++j;
		}
		if(j==sts)
			cout<<"Plan will be successful\n";
		else
			cout<<"Plan should be changed\n";
	}
}