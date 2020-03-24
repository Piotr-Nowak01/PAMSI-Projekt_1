#include <math.h>
#include "introsort.h"
#include "quicksort.h"
#include "wstawianie.h"
#include "heapsort.h"
void introsort_1 (int T[],int p, int r, int g)
{
	int rozmiar=r-p+1;
	if(rozmiar<=16)			// dla tablic, których rozmiar <16, wywo³ywana jest funkcja sortowania przez wstawianie
	{
		wstawianie(T,p,r);
	}	
	else if(g==0)			// gdy wykonano maksymaln¹ liczbê rekurencji, wywo³ywana jest funkcja sortowania heapsort
	{
		heapsort(T,p,r);
	}
	else					// gdy nie zosta³y spe³nione powy¿sze warunki, dokonywany jest dalszy podzia³ tablicy
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
