#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

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
    int A[] = {2,6,10,10,10,12,28};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<LastOccurrence(A,10,0,n-1);
    
    return 0;
}

