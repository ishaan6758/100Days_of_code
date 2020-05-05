#include<bits/stdc++.h>
using namespace std;
int peak(int *a,int low ,int high,int n)
{
	int mid=low+(high-low)/2;        // peak element it is the element which is grater than both neighbours 
									// binary search is used to calculate the peak element in O(logn) time 
	
	if((mid==0 ||a[mid-1]<a[mid]) && (mid==n-1||a[mid+1]<a[mid]))
	return a[mid];
	
	else if(mid>0 && a[mid-1]>a[mid])
	return peak(a,low,mid-1,n);
	
	else
	return peak(a,mid+1,high,n);
}
void peak_iterative(int *a,int n)
{										// iterative peak element take O(n) time complexity 
	for(int i=1;i<n-1;i++)
	{
		if(a[i]>a[i-1] && a[i]>a[i+1])
		cout<<a[i];
	}
}
int main()
{
	int a[]={1,18,12,10,20,17};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<peak(a,0,n-1,n);
	peak_iterative(a,n);
}

