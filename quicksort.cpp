#include "quicksort.h"
int podzial(int T[], int p, int r)	// funkcja zwraca element dziel¹cy tablicê na 2 czêœci
{									// funkcja jednoczeœnie zamienia elementy w taki sposób, ¿e elementy mniejsze lub równe elementowi dziel¹cemu s¹ na lewo od elementu dziel¹cego, a elementy wiêksze s¹ na prawo od elementu dziel¹cego
	int x=T[(p+r)/2];
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
