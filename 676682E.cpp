#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s,ans ="";
		cin>>s;
		int i = 0,flag = 0;
		for(int j = s.size()-1; j>=0;j--){
			if(s[j]==s[i]){
				ans += s[j];
				i++;
				flag = 1;
			}
			else if(s[j]!=s[i]&&flag)
				break;
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
}