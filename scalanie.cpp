#include "scalanie.h"
void scalanie(int T[], int p, int q, int r)
{
int *pom = new int [r+1];
int i=p,j=q+1;
for(int i=p;i<=r; i++) 
    {
		pom[i] = T[i];
	}
for(int k=p;k<=r;k++) 
	{
		if(i<=q && j <= r)
	    {
	    	if (pom[i]<=pom[j])
	    	{
	    		T[k]=pom[i];
	    		i++;
			}
			else
			{
				T[k]=pom[j];
				j++;
			}
		}
		else if (i<=q)
		{
			T[k]=pom[i];
			i++;
		}
		else 
		{
			T[k]=pom[j];
			j++;
		}
	}
    delete [] pom;
}
void sort_scalanie(int T[], int p, int r)
{
	if (p<r)
	{
		int	q=(p+r)/2; //srodek przedzia³u
		sort_scalanie(T,p,q); 
		sort_scalanie(T,q+1,r);
		scalanie(T,p,q,r);
	}
	return;
}
