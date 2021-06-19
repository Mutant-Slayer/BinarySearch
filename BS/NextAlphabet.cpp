#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

int NextAlphabet(char *A,char x,int start,int end)
{
	char res='#';
	
	
	while(start<=end)
	{
		int mid= start + (end-start)/2;
		if(A[mid]==x){
			start=mid+1;
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
    char A[] = {'c','f','j'};
    int n=sizeof(A)/sizeof(A[0]);
    char target='j';
    
    char x=NextAlphabet(A,target,0,n-1);
    if(A[n-1]<=target)
    cout <<A[0];
    else
    cout <<x;
    
    return 0;
}

