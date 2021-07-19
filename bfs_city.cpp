	//Aim:To implement BFS search.
	//bfs

	#include<iostream>
	#include<stdlib.h>
	using namespace std;
	int connectivity[20][20],v,k,n,a[20],front,rear,visit[10],visited[10];
	string cities[20];

	main()
	{
	int m;
	cout <<"enter no of cities";
	cin >> n;
	cout<<"Enter names of cities: "<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>cities[i];

		}



		cout<<"Enter the connectivity matrix: "<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>connectivity[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<connectivity[i][j]<<"\t";
			
				if(((j+1)%n)==0)
				{
				
					cout<<"\n";
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<"\nCity no "<<i<<"\t"<<cities[i]<<"\n";
		}

	cout <<"enter initial city no ";
	cin >>v;
	cout <<"Visited cities \n";
	cout << cities[v];
	visited[v]=1;
	k=1;
	while(k<n)
	{
	for(int j=1;j<=n;j++)
	if(connectivity[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
	{
	visit[j]=1;
	a[rear++]=j;
	}
	v=a[front++];
	cout<<"\t"<<cities[v] << " ";
	k++;
	visit[v]=0;
	visited[v]=1;
	}
	}
	/*
	[ccoew@localhost ~]$ g++ city.cpp
	[ccoew@localhost ~]$ ./a.out
	enter no of cities10
	Enter names of cities: 
	Pune
	Mumbai
	Banglore
	Delhi  
	Akola           
	Nagpur
	Nashik
	Hyderabad
	Aurangabad
	Kolhapur
	Enter the connectivity matrix: 
	0
	0
	0
	7
	0
	0
	0
	0
	0
	0
	0
	0
	0
	8
	0
	0
	0
	0
	0
	0
	0
	0
	0
	0
	10
	0
	0
	0
	0
	0
	7
	8
	0
	0
	9
	11
	0
	0
	0
	0
	0
	0
	10
	9
	0
	0
	13
	0
	0
	0
	0
	11
	0
	0
	0
	0
	0
	0
	12
	0
	0
	0
	0
	0
	13
	0
	0
	5
	4
	0
	0
	0
	0
	0
	0
	0
	5
	0
	0 
	0
	0
	0
	0
	0
	0
	12
	4
	0
	0
	6
	0
	0
	0
	0
	0
	0
	0
	0
	6
	0
	0	0	0	7	0	0	0	0	0	0	
	0	0	0	8	0	0	0	0	0	0	
	0	0	0	0	10	0	0	0	0	0	
	7	8	0	0	9	11	0	0	0	0	
	0	0	10	9	0	0	13	0	0	0	
	0	11	0	0	0	0	0	0	12	0	
	0	0	0	0	13	0	0	5	4	0	
	0	0	0	0	0	0	5	0	0	0	
	0	0	0	0	0	12	4	0	0	6	
	0	0	0	0	0	0	0	0	6	0	

	City no 0	Pune

	City no 1	Mumbai

	City no 2	Banglore

	City no 3	Delhi

	City no 4	Akola

	City no 5	Nagpur

	City no 6	Nashik

	City no 7	Hyderabad

	City no 8	Aurangabad

	City no 9	Kolhapur
	enter initial city no 0
	Visited cities 
	Pune	Delhi 	Mumbai 	Akola 	Nagpur 	Banglore 	Nashik 	Aurangabad 	Hyderabad 	Kolhapur  
	*/
