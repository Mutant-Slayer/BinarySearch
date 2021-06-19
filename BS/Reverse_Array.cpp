#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

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
}

int main()
{
    int A[] = {12,9,8,5,3};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<Binary_Search_Reverse(A,8,0,n-1);
    
    return 0;
}

