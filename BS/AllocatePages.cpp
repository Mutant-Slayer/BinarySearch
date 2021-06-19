#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

// allocate pages
// minimum of maximum page alloted to each kid

bool isValid(int A[],int n,int k,int mx)
{
	int student=1;
	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=A[i];
		
		if(sum>mx)
		{
			student++;
			sum=A[i];
		}
		
		if(student>k)
		return false;
	}
	return true;
}

int AllocatePages(int A[],int k,int n)
{
	int start=*max_element(A,A+n);
	int end=accumulate(A,A+n,0);
	int res=-1;
	
	if(k>n)
	return -1;
	else
	{
		while(start<=end)
		{
			int mid=start+ (end-start)/2;

			if( isValid(A,n,k,mid)==true )
			{
				res=mid;
				end=mid-1;
			}
			else start=mid+1;
		}
	}
	return res;
}

int main()
{
	int pages[]={12, 34, 67, 90};
	int k=2;
	int n=sizeof(pages)/sizeof(pages[0]);
	
	cout <<AllocatePages(pages,k,n);

    return 0;
}

