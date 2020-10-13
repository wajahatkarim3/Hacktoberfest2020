#include<bits/stdc++.h>
using  namespace std;
void merge(int a[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int lf[n1];
	int rt[n2];
	for(int i=0; i<n1; i++)
	lf[i]=a[l+i];
    for(int i=0; i<n2; i++)
	rt[i]=a[m+1+i];
	int i=0,j=0,k=1;
	while(i<n1 && j<n2)	
	{
		if(lf[i]<=rt[j])
		{
			a[k]=lf[i];
			i++;
		}
		else
		{
			a[k]=rt[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=lf[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=rt[j];
		j++;
		k++;
		
	}
	
}
void mergesort(int a[],int l,int r)
{
	int m=l+(r-1)/2;
	if(l<r)
	{
	  mergesort(a,l,m);
	  mergesort(a,m+1,r);
	  merge(a,l,m,r);	
	}
}
void printarray(int a[], int n)
{
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the size of the Array:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array to be sorted:"<<endl;
	for(int i=0; i<n; i++)
	cin>>a[i];
	cout<<"The sorted Array is:"<<endl;
	mergesort(a,0,n-1);
	printarray(a,n);
	
}
