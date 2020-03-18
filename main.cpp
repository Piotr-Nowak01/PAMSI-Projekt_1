#include <iostream>
#include "quicksort.h"  //funkcja quicksort
#include "scalanie.h"   // funckja sort_scalanie
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
int main() {
	int n=500000;
	int T[n];
	int p=0;
	int r=((sizeof(T)/sizeof(T[0]))-1);
	long long int srednia=0;
	for (int k=0; k<100;k++)
	{
		for (int i=0; i<n;i++)
		{
			T[i]=rand()%n;
		}	
		quicksort(T,p,r);
	}
cout<<"Koniec";
}

