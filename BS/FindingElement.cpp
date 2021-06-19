#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

// Finding element in rotated array
// find min element 
// apply bs on both part

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

int Binary_Search(int *A,int x,int start,int end)
{
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; //optimized version
		//(start+end)/2;
		if(A[mid]==x)
			return mid;
		else if(A[mid]<x)
//			return Binary_Search(A,x,mid+1,end);
			start=mid+1;
		else 
			end=mid-1;
//			return Binary_Search(A,x,start,mid-1);
	}
	
	return -1;
}


int main()
{
    int A[] = {11,12,15,18,20,1,2,5,6,8};
    int n=sizeof(A)/sizeof(A[0]);
    
    int index=NoOfRotations(A,0,n-1);
    
    
//    int a=Binary_Search(A,15,0,index-1);
//    int b=Binary_Search(A,15,index,n-1);
    
//    cout <<max(a,b);

	cout <<max( Binary_Search(A,5,0,index-1) ,  Binary_Search(A,5,index,n-1) );
    
    return 0;
}

