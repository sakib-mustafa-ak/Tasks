#include<bits/stdc++.h>
using namespace std;

int main(){
	std::vector<int> v = {9,8,1,3,4,7};
	make_heap(v.begin(),v.end());

	for (auto i: v)
		cout<<i<<" ";
	cout<<endl;

	pop_heap(v.begin(),v.end());
	for (auto i: v)
		cout<<i<<" ";
	cout<<endl;

	v.pop_back();
	for (auto i: v)
		cout<<i<<" ";
	cout<<endl;
}