#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int FirstOccurrence(int *A,int x,int start,int end)
{
	int result=-1;
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; 
		if(A[mid]==x){
			result=mid;
			end=mid-1;
		}
		else if(A[mid]<x)
			start=mid+1;
		else 
			end=mid-1;		
	}
	
	return result;
}

int LastOccurrence(int *A,int x,int start,int end)
{
	int result=-1;
	
	while(start<=end)
	{
		int mid= start + (end-start)/2; 
		if(A[mid]==x){
			result=mid;
			start=mid+1;
		}
		else if(A[mid]<x)
			start=mid+1;
		else 
			end=mid-1;		
	}
	
	return result;
}

int main()
{
    int A[] = {2,5,12,12,12,12,20,25};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<LastOccurrence(A,12,0,n-1)-FirstOccurrence(A,12,0,n-1)+1;
    
    return 0;
}

