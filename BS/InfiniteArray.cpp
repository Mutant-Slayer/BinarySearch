#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

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
}

int main()
{
    int A[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    
    int low=0;
    int high=1;
    int key=90;
    
    while(key>A[high])
    {
    	low=high;
    	high*=2;
	}
    
    cout <<Binary_Search(A,key,low,high);
    
    return 0;
}

