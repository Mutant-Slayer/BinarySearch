#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

void BsOn2D(int A[4][4], int x, int n, int m)
{
	int i=0,j=m-1;
	
	
	while(i>=0 && i<n && j>=0 && j<m)
	{
		if(A[i][j]==x){
		cout <<i<<" "<<j;
		return;
		}
		else if(A[i][j]>x)
		j--;
		else if(A[i][j]<x)
		i++;
	}
	return;
}

int main()
{
	int A[4][4]={ {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};


	BsOn2D(A,29,4,4);
	

    return 0;
}

