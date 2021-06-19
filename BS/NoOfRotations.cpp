#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

// no of rotations == index of minimum element

int NoOfRotations(int *A,int start,int end)
{
	int n=sizeof(A)/sizeof(A[0]);
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; 
		int next=(mid+1)%n;
		int prev=(mid-1+n)%n;
		
		if(A[mid]<=A[next] && A[prev]>=A[mid])
			return mid;
			
		if (mid < end && A[mid+1] < A[mid])
       	return (mid+1); //if min is mid+1 element
 
			
		if(A[mid]>A[start])
			start=mid+1;
		else end=mid-1;
	}
}

int main()
{
    int A[] = {11,13,15,17};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<NoOfRotations(A,0,n-1);
    
    return 0;
}

