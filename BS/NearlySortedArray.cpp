#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int Binary_Search_NearlySorted(int *A,int x,int start,int end)
{
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; //optimized version
		//(start+end)/2;
		if(A[mid]==x)
			return mid;
			
		if( mid-1>=start && A[mid-1]==x)
			return mid-1;
			
		if( mid+1<=end && A[mid+1]==x )
			return mid+1;
			
		else if(A[mid]<x)
//			return Binary_Search(A,x,mid+1,end);
			start=mid+2;
		else 
			end=mid-2;
//			return Binary_Search(A,x,start,mid-1);
	}
}

int main()
{
    int A[] = {10, 3, 40, 20, 50, 80, 70};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<Binary_Search_NearlySorted(A,10,0,n-1);
    
    return 0;
}

