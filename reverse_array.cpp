#include<bits/stdc++.h>

using namespace std; 
int main()
{
	int n,i,first,last,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
		first=0;
		last=n-1;
	
	do
	{
		temp=a[first];
		a[first]=a[last];
		a[last]=temp;
		
		first++;
		last--;
		
	}while(first<last);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
