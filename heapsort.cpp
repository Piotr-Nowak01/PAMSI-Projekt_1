#include "heapsort.h"
void kopcowanie (int T[],int rozmiar, int os)
{
	int max=os;
	int pom;
	int l=2*os+1;
	int p=2*os+2;
	if (l<rozmiar && T[l]>T[max])
	{
		max=l;
	}
	if (p<rozmiar && T[p]>T[max])
	{
		max=p;
	}
	if (max!=os)
	{
		pom=T[os];
		T[os]=T[max];
		T[max]=pom;
		kopcowanie(T,rozmiar,max);
	}	
}
void heapsort(int T[],int p,int r)
{
	++r;
	int liczba_pom;
	int *pom=new int [r-p];
	for (int i=0;i<r-p;i++)
	{
		pom[i]=T[i+p];
	}
	for (int i=(r-p)/2-1;i>=0;--i)
	{
		kopcowanie(pom,r-p,i);
	}
	for (int i=(r-p)-1;i>=0;--i)
	{
		liczba_pom=pom[0];
		pom[0]=pom[i];
		pom[i]=liczba_pom;
		kopcowanie(pom,i,0);
	}
	for (int i=0;i<r-p;i++)
	{
		T[i+p]=pom[i];
	}
	delete [] pom;
}
