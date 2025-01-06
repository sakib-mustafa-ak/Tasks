#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main(){
	int t;
	cin>>t;
	while(t--){
		double R,n;
		cin>>R>>n;
		double angle = (pi/n);
		double r = (R*sin(angle))/(1-sin(angle));
		double t_area = (R+r)*r*sin(pi/2-angle)/2;
		t_area -= (R*R*(angle)/2);
		t_area -= (r*r*(pi/2-angle)/2);
		double ans = 2*t_area*n;
		printf("%.10lf\n",ans); 
	}
}