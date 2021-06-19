#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int MinimumDifference(int *A,int x,int start,int end)
{
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; 
		if(A[mid]==x)
			return A[mid];
		else if(A[mid]<x)
			start=mid+1;
		else 
			end=mid-1;
	}
	
	// when the element is not found low and high will point to adjacent element of key element
	
	return ( abs(A[end]-x) > abs(A[start]-x) )?A[start]:A[end];
	
}

int main()
{
    int A[] = {1,3,8,10,15};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<MinimumDifference(A,20,0,n-1);
    
    return 0;
}

