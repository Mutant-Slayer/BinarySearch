#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

// max element in bitonic array is similar to finding peak element
// we write same code
// bitonic array == monotonic inc then monotonic dec

int Bitonic(int *A,int start,int end)
{
	int n=sizeof(A)/sizeof(A[0])-1;

	while(start<=end)
	{
		int mid=start + (end-start)/2;

		if((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid + 1] <= A[mid]))
		return A[mid];
		else if(A[mid+1]>A[mid])
		start=mid+1;
		else
		end=mid-1;
	}
}

int main()
{
    int A[]={1 ,4, 8, 3, 2};
    int n=sizeof(A)/sizeof(A[0]);

	cout <<Bitonic(A,0,n-1);

    return 0;
}

