#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX

//const N = 5;
//int graph[N][N];

void floydWarshall(int dist[5][5]){
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if(dist[j][k] > (dist[j][i] + dist[i][k]) && (dist[j][i] != inf) && dist[j][i] != inf)
					dist[j][k] = dist[j][i] + dist[i][k];
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(dist[i][j] != inf)
				cout<<dist[i][j]<<' ';
			else
				cout<<"inf ";
		}
		cout<<endl;
	}
}

int main(){
	// int n;
	// cin>>n;

	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		cin >> graph[i][j];
	// 	}
	// }

	int graph[5][5] = {{0,4,inf,5},
				   {inf,0,1,inf,6},
				   {2,inf,0,3,inf},
				   {inf,inf,1,0,2},
				   {1,inf,inf,4,0}};
	floydWarshall(graph);

}