#include <stdio.h>

int solution (int A[], int N)
{
	int count = 0;
	int czy;
	int tab[N];
	for (int i=0 ; i<N ; i++)
		tab[i]=0;

	for(int i=0 ; i<N ; i++)
	{
		tab[A[i]-1]=1;
		czy=1;
		for(int j=A[i]-1 ; j>=0 ; j--)
		{
			if(tab[j]==0)
				czy=0;
		}
		printf("%d	",czy);
		if(czy)
			count++;
	}
	return count;
}

int main(void)
{
	int a[]={2,3,5,1,9,4,7,6,8,10};
	int n = sizeof(a) / sizeof(a[0]);
	printf("	%d",solution(a,n));
return 0;
}
