#include <stdio.h>

int solution (int A[], int N)
{
	int even = 0;

	for (int i=0 ; i<N ; i++)
	{
		if(A[i]%2 == 0)
			even++;
	}
	if (N - even == even)
		return 1;

	return 0;
}

int main(void)
{
	int a[]={2,3,3,4,7,6,6,6};
	int n = sizeof(a) / sizeof(a[0]);
	printf("	%d",solution(a,n));
return 0;
}
