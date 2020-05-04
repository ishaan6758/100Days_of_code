#include <bits/stdc++.h>
using namespace std;
#define int long long

int BinarySearch(int  *a,int key,int n)
{

	int low=0;
	int high=n-1;

	int mid=(low+high)/2;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
			return mid;

		else if(a[mid]<key)
			low=mid+1;

		else
			high=mid-1;
	}
	return -1;
}
int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	int a[]={1,2,3,4,5}; //given sorted  array
	int n=sizeof(a)/sizeof(a[0]);

	int k=2; //element to be searched

	cout<<BinarySearch(a,k,n)<<endl;


}