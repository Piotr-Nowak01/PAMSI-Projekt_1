#include "quicksort.h"
int podzial(int T[], int p, int r)	// funkcja zwraca element dziel�cy tablic� na 2 cz�ci
{									// funkcja jednocze�nie zamienia elementy w taki spos�b, �e elementy mniejsze lub r�wne elementowi dziel�cemu s� na lewo od elementu dziel�cego, a elementy wi�ksze s� na prawo od elementu dziel�cego
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
