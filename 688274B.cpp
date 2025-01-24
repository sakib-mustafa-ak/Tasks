#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
int tc=1;

bool comp(string a,string b){
	return a.length()<b.length();
}
signed main(){
    Start
    
    int t;
    while(cin>>t&&t){
    	vector<string> s(t);
    	for(int i=0;i<t;i++)
    		cin>>s[i];
    	sort(all(s),comp);
    	cout<<"SET "<<tc++<<endl;
    	for(int i=0;i<t;i++){
    		if(i%2==0)
    			cout<<s[i]<<endl;
    	}
    		
		for(int i=t-1;i>=1;i--){
			if(i%2!=0)
				cout<<s[i]<<endl;
		}
    }
}