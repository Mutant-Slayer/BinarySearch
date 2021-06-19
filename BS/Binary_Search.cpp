#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

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
}

int main()
{
    int A[] = {2,5,8,9,12};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<Binary_Search(A,12,0,n-1);
    
    return 0;
}

