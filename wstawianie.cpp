#include "wstawianie.h"
void wstawianie(int T[],int p,int r)
{
	r++;
	int i=p;
	int w;
	while (i<r)
	{
		int j=i;
		while (j>0 && T[j - 1] > T[j])
		{
			w=T[j];
			T[j]=T[j-1];
			T[j-1]=w;
			--j;
		}
		++i;
	}
}
