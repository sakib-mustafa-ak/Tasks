#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, tc = 1;
	cin>>t;
	while(t--){
		cout<<"Case "<<tc++<<": ";
		vector<int> a(3);

		for(int i = 0 ; i < 3 ; i++) cin>>a[i];
		int sum = a[0]+a[1]+a[2];
		sort(a.begin(),a.end());
		int flag = 1;
		if(sum<=9){
			if(a[2]==6){
				if(a[1]+a[0]==2||(a[1]==3&&a[0]==0))
					cout<<"perfectus\n";
				else
					cout<<"invalidum\n";
			}
			else if(a[2]==4){
				if((a[1]==4&&a[0]==0)||(a[1]==3&&a[0]==1)||(a[1]==2&&a[0]==1))
					cout<<"perfectus\n";
				else
					cout<<"invalidum\n";
			}
			else if(a[2]==3&&a[1]==3&&a[0]==3){
				cout<<"perfectus\n";
			}
			else if(a[2]==2&&a[1]==2&&a[0]==2)
				cout<<"perfectus\n";
			else
				cout<<"invalidum\n";
		}
		else
			cout<<"invalidum\n";
	}
}