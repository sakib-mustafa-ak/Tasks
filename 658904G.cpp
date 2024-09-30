#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
	int n,flag2 = 0;
	cin>>n;
	string s;
	cin>>s;
	vector<int> a(n,0);
	//cout<<s.size()<<endl;
	if(n==1&&s[0]=='?'&&s.size()==1){
		cout<<"a\n";
		return 0;
	}
	else if(n==1&&s[0]!='?'&&s.size()==1){
		cout<<s<<endl;
		return 0;
	}
	else if(s.size()<2*n)
	{
		cout<<"IMPOSSIBLE\n";
		return 0;
	}
	else
	{
		int flag = 1;

		for(int i = 0 ; i < s.size()/2 ; i++)
		{
			if(s[i]!='?')
				a[s[i]-97]=1;
			else if(s[s.size()-1-i]!='?')
				a[s[s.size()-1-i]-97]=1;
		}

		for(int i = 0; i<s.size()/2 ; i++)
		{
			
			if(s[i]==s[s.size()-1-i]||s[i]=='?'||s[s.size()-1-i]=='?')
				flag = 1;
			else{
				flag = 0;
				break;
			}
		}

		if(flag == 0)
		{
			cout<<"IMPOSSIBLE\n";
			return 0;
		}
		else
		{

			for(int i = (s.size()/2) ; i >= 0 ; i--)
			{
				if(s[i]!='?'){
					if(s[s.size()-1-i]=='?')
						s[s.size()-1-i]=s[i];
				}
				else if(s[i]=='?'&&s[s.size()-1-i]!='?'){
					s[i]=s[s.size()-1-i];
				}
				else if(s[i]=='?'&&s[s.size()-1-i]=='?'&&flag2==0){
					int k;
					for( k = n-1 ; k >= 0 ; k--)
					{
						if(a[k]==0)
						{
							s[i]=('a'+ k);
							s[s.size()-1-i]=s[i];
							a[k]=1;
							break;
						}
					}
					if(k<0){
						flag2 = 1;
						s[i]='a';
						s[s.size()-1-i]=s[i];
					}
				}
				else if(s[i]=='?'&&s[s.size()-1-i]=='?'&&flag2==1)
				{
					s[i]='a';
					s[s.size()-1-i]=s[i];
				}
			}
		}
	}
	for(int i = 0; i < n ; i++)
	{
		if(a[i]==0){
			cout<<"IMPOSSIBLE\n";
			return 0;
		}

	}
	cout<<s<<endl;
}