#include "scalanie.h"
void scalanie(int T[], int p, int q, int r)
{
int *pom = new int [r];
int i=p,j=q+1;
for(int i=p;i<r; i++) 
    {
		pom[i] = T[i];
	}
for(int k=p;k<=r;k++) 
	if(i<=q)
		if(j <= r)
    		if(pom[j]<pom[i])
            	T[k] = pom[j++];
        	else
            	T[k] = pom[i++];
    	else
        	T[k] = pom[i++];
	else
      T[k] = pom[j++];
    delete [] pom;
}
void sort_scalanie(int T[], int p, int r)
{
	if (p<r)
	{
		int	q=(p+r)/2;
		sort_scalanie(T,p,q);
		sort_scalanie(T,q+1,r);
		scalanie(T,p,q,r);
	}
	return;
}
