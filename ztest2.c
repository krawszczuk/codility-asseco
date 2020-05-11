#include <stdio.h>

int solution (char *S, int C[], int N)
{
	int minimum = 0;
	int tab[N];
	int maxCost;
	int index = 0;

	for (int i=0 ; i<N  ; i++)
		tab[i]=0;

	for (int i = 0 ; i<N ; i++)
	{
		if(S[i] == S[i+1])
		{
			maxCost=-1;
			while(S[i] == S[i+1])
			{
				tab[i]=1;
				tab[i+1]=1;

				if(C[i] > maxCost)
				{
					maxCost = C[i];
					index = i;
				}
			i++;
			}
			if(C[i] > maxCost)
			{
				maxCost = C[i];
				index = i;
			}
			tab[index] = 0;
		}
	}

	for(int i=0 ; i<N ; i++)
	{
		if(tab[i]==1)
			minimum += C[i];
	}

	for(int i=0; i<N ; i++)
			printf(" %d",tab[i]);
return minimum;
}

int main(void)
{
	char s[]={'a','a','a','a','b','b'};
	int c[]={20,10,10,10,20,10};
	int n = sizeof(c) / sizeof(c[0]);
	printf("	%d",solution(s,c,n));
return 0;
}
