#include "scalanie.h"
void scalanie(int T[], int p, int q, int r)
{
	int *pom = new int [r-p+1];
	int i=p,j=q+1;
	int k=0;
	while (i<=q && j<=r)
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
	while (i<=q)
	{
		pom[k]=T[i];
		i++;
		k++;
	}
	while (j<=r)
	{
		pom[k]=T[j];
		j++;
		k++;
	}
	for(int i=p;i<=r;i++)
	{
		T[i]=pom[i-p];
	}
	delete [] pom;
}
void sort_scalanie(int T[], int p, int r)
{
	if (p<r)
	{
		int	q=p+(r-p)/2; //srodek przedzia³u
		sort_scalanie(T,p,q); 
		sort_scalanie(T,q+1,r);
		scalanie(T,p,q,r);
	}
	return;
}
