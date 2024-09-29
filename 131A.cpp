#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	cout<<s;
	if(s[0]>=97)
	{
		s[0]-=32;
		cout<<s[0];
	}
	for (int i = 1; i < s.size(); ++i)
	{
		if(s[i]<=90)
			cout<<s[i]-32;
		else
			cout<<s[i];
	}
	cout<<endl;
}