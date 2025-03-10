#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	map<char , int> mp;
	for (int i = 0; i < s.size(); ++i)
	{
		mp[s[i]]++;
	}
	int size = mp.size();
	if(size%2==1)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
}