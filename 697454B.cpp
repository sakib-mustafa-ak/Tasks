#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	map<char,int> m1,m2;
	for (int i = 0; i < s1.size(); ++i)
	{
		m1[s1[i]]++;
	}
	for (int i = 0; i < s2.size(); ++i)
	{
		m1[s2[i]]++;
	}
	for (int i = 0; i < s3.size(); ++i)
	{
		m2[s3[i]]++;
	}
	int flag = 1;
	int size1 = s1.size()+s2.size();
	int size2 = s3.size();
	if(size1==size2){
		for(auto i : m1){
			if(i.second != m2[i.first]){
				cout<<"NO\n";
				flag = 0;
				break;
			}
		}
		if(flag ==1)
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	
}