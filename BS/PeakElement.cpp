#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int PeakElement(int *A,int start,int end)
{
	int n=sizeof(A)/sizeof(A[0])-1;

	while(start<=end)
	{
		int mid=start + (end-start)/2;

		if((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid + 1] <= A[mid]))
		return mid;
		else if(A[mid+1]>A[mid])
		start=mid+1;
		else
		end=mid-1;
	}
}

int main()
{
    int A[]={5,10,15,20,6};
    int n=sizeof(A)/sizeof(A[0]);
    
	cout <<PeakElement(A,0,n-1);
    
    return 0;
}

