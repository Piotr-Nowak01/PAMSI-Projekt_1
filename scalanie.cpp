#include "scalanie.h"
void scalanie(int T[], int p, int q, int r)
{
	int *pom = new int [r-p+1];
	int i=p,j=q+1;
	int k=0;
	while (i<=q && j<=r)		// dop�ki oba przedzia�y si� nie sko�czy�y, por�wnywane s� kolejne elementy obu przedzia��w i mniejszy element jest wpisywany do tablicy pomocniczej
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
	while (i<=q)			// dop�ki 1 przedzia� si� nie skonczy�, wpisz pozosta�e elementy do tablicy pomocniczej
	{
		pom[k]=T[i];
		i++;
		k++;
	}
	while (j<=r)			// dop�ki 2 przedzia� si� nie sko�czy�, wpisz pozosta�e elementy do tablicy pomocniczej 
	{
		pom[k]=T[j];
		j++;
		k++;
	}
	for(int i=p;i<=r;i++)	// nadpisz pierwotn� tablic� tablic� pomocnicz�
	{
		T[i]=pom[i-p];
	}
	delete [] pom;
}
void sort_scalanie(int T[], int p, int r)
{
	if (p<r)
	{
		int	q=p+(r-p)/2; 			//srodek przedzia�u
		sort_scalanie(T,p,q); 		// wywolywana jest funkcja dla 1 przedzia�u
		sort_scalanie(T,q+1,r);		// wywo�ywana jest funkcja dla 2 przedzia�y
		scalanie(T,p,q,r);			// wywo�ywana jest funkcja scalaj�ca oba przedzia�y
	}
	return;
}
