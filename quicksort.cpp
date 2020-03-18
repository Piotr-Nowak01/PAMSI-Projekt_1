#include "quicksort.h"
int podzial(int T[], int p, int r)
{
	int x=T[p];
	int i=p,j=r,w;
	while (true)
	{
		while(T[j]>x)
			j--;
		while (T[i]<x)
			i++;
		if (i<j)
			{
				w=T[i];
				T[i]=T[j];
				T[j]=w;
				i++;
				j--;
			}
		else 
			return j;
	}
}
void quicksort (int T[], int p, int r)
{
	int q;
	if(p<r)
	{
		q=podzial(T,p,r);
		quicksort(T,p,q);
		quicksort(T,q+1,r);
	}
}
