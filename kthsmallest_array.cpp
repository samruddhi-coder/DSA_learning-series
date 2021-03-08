#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,k,temp=0;
	cout<<"N=";
	cin>>n;
	cout<<"enter elements: ";
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cin>>k;
	
	//main code
	
	/*for(int j=0;j<n;j++)
	{
	
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{	
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}*/
	
	
	sort(a,a+n);
	cout<<"\nsorted: ";
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout <<"\nKth element: "<<a[k-1];
		
}
