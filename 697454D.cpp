#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int sum = min(s[0]-'a','z'-s[0]+1);
	
	for (int i = 1; i < s.size(); ++i)
	{	
		sum+= min(abs(s[i]-s[i-1]),min(abs(s[i]-'a')+abs('z'-s[i-1])+1,abs('a'-s[i-1])+abs(s[i]-'z')+1));
	}
	cout<<sum<<endl;
}