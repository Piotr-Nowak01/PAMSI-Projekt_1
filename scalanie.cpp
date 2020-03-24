#include "scalanie.h"
void scalanie(int T[], int p, int q, int r)
{
	int *pom = new int [r-p+1];
	int i=p,j=q+1;
	int k=0;
	while (i<=q && j<=r)		// dopóki oba przedzia³y siê nie skoñczy³y, porównywane s¹ kolejne elementy obu przedzia³ów i mniejszy element jest wpisywany do tablicy pomocniczej
	{
		if (T[i]<=T[j])
		{
			pom[k]=T[i];
			i++;
		}
		else
		{
			pom[k]=T[j];
			j++;
		}
		k++;
	}
	while (i<=q)			// dopóki 1 przedzia³ siê nie skonczy³, wpisz pozosta³e elementy do tablicy pomocniczej
	{
		pom[k]=T[i];
		i++;
		k++;
	}
	while (j<=r)			// dopóki 2 przedzia³ siê nie skoñczy³, wpisz pozosta³e elementy do tablicy pomocniczej 
	{
		pom[k]=T[j];
		j++;
		k++;
	}
	for(int i=p;i<=r;i++)	// nadpisz pierwotn¹ tablicê tablic¹ pomocnicz¹
	{
		T[i]=pom[i-p];
	}
	delete [] pom;
}
void sort_scalanie(int T[], int p, int r)
{
	if (p<r)
	{
		int	q=p+(r-p)/2; 			//srodek przedzia³u
		sort_scalanie(T,p,q); 		// wywolywana jest funkcja dla 1 przedzia³u
		sort_scalanie(T,q+1,r);		// wywo³ywana jest funkcja dla 2 przedzia³y
		scalanie(T,p,q,r);			// wywo³ywana jest funkcja scalaj¹ca oba przedzia³y
	}
	return;
}
