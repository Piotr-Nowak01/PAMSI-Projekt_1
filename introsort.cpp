#include <math.h>
#include "introsort.h"
#include "quicksort.h"
#include "wstawianie.h"
#include "heapsort.h"
void introsort_1 (int T[],int p, int r, int g)
{
	int rozmiar=r-p+1;
	if(rozmiar<=16)
	{
		wstawianie(T,p,r);
	}
	else if(g==0)
	{
		heapsort(T,p,r);
	}
	else
	{
		int os=podzial(T,p,r);
		introsort_1(T,p,os,--g);
		introsort_1(T,os+1,r,--g);
	}
}
void introsort(int T[], int p, int r)
{
	int g=(int)log(r-p+1)*2; 	//g³êbokoœæ
	introsort_1(T,p,r,g);
}
