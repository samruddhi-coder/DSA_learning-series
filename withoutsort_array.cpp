#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,k=0,c0,c1,c2;
	cout<<"N=";
	cin>>n;
	cout<<"enter elements: ";
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	c0=0;c1=0;c2=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			c0++;
		}
		if(a[i]==1)
		{
			c1++;
		}
		if(a[i]==2)
		{
			c2++;
		}
	}
	
	for(i=0;i<c0;i++)
	{
		a[k++]=0;
	}
	for(i=0;i<c1;i++)
	{
		a[k++]=1;
	}
	for(i=0;i<c2;i++)
	{
		a[k++]=2;
	}	
	
	cout<<"\nsorted: ";
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
