#include<bits/stdc++.h>

using namespace std; 
int main()
{
	int n,i,min,max;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	min=a[0];
	max=a[0];

	for(i=0;i<n;i++)
	{
		
		if(a[i]<min)
		{
			min=a[i];
		}
		else if(a[i]>max )
		{
			max=a[i];
		}
	}
	
	cout<<min<<endl;
	cout<<max;
}
