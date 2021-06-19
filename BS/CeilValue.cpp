#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int CeilValue(int *A,int x,int start,int end)
{
	int res=0;
	
	if(x<=A[start])
	return A[start];
	
	if(x>A[end])
	return -1;
	
	while(start<=end)
	{
		int mid= start + (end-start)/2;
		if(A[mid]==x){
			res=A[mid];
			break;
		}
		else if(A[mid]>x){
			res=A[mid];
			end=mid-1;
		}
		else 
			start=mid+1;
	}
	return res;
}

int main()
{
    int A[] = {1, 2, 8, 10, 10, 12, 19};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout <<CeilValue(A,1,0,n-1);
    
    return 0;
}

