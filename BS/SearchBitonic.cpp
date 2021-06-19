#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

// max element in bitonic array is similar to finding peak element
// we write same code
// bitonic array == monotonic inc then monotonic dec
// search in bitonic array
// bs upto peak increasing
// and from peak+1 to n decreasing

int Bitonic(int *A,int start,int end)
{
	int n=sizeof(A)/sizeof(A[0])-1;

	while(start<=end)
	{
		int mid=start + (end-start)/2;

		if((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid + 1] <= A[mid]))
		return mid;
		else if(A[mid+1]>A[mid])
		start=mid+1;
		else
		end=mid-1;
	}
}

int Binary_Search(int *A,int x,int start,int end)
{

	while(start<=end)
	{
		int mid= start + (end-start)/2; 
		if(A[mid]==x)
			return mid;
		else if(A[mid]<x)
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
}

int Binary_Search_Reverse(int *A,int x,int start,int end)
{

	while(start<=end)
	{
		int mid= start + (end-start)/2;
		if(A[mid]==x)
			return mid;
		else if(A[mid]<x)
			end=mid-1;
		else
			start=mid+1;
	}
	return -1;
}


int main()
{
    int A[]={-8, 1, 2, 3, 4, 5, -2, -3};
    int n=sizeof(A)/sizeof(A[0]);
    int x=1;

	int peak=Bitonic(A,0,n-1);
	cout <<max( Binary_Search(A,x,0,peak) , Binary_Search_Reverse(A,x,peak+1,n) );

    return 0;
}

