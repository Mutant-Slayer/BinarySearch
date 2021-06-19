#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

//first occurrence of 1 in infinite binary sorted array

int FirstOccurrenceof1(int *A,int x,int start,int end)
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



int main()
{
    int A[] = {0, 0, 1, 1, 1, 1};
    
    int low=0;
    int high=1;
    
    while(1>A[high])
    {
    	low=high;
    	high*=2;
	}
    
    cout <<FirstOccurrenceof1(A,1,low,high);
    
    return 0;
}

