#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,eve=0,evei,odd=0,oddi; 
	cin>>n;

	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
		if(x%2==1){
			odd++;
			oddi=i+1;
		}
		else{
			eve++;
			evei=i+1;
		}
	}
	if(eve<odd)
		cout<<evei<<endl;
	else
		cout<<oddi<<endl;
}