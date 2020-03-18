#include <iostream>
#include "quicksort.h"  //funkcja quicksort
#include "scalanie.h"   // funckja sort_scalanie
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
int main() {
	int n=1000000;
	int p=0;
	int r=n-1;
	int suma=0;
	int srednia;
/*
	for (int k=0; k<100; k++)
	{
		int *T = new int [n];
		for (int i=0; i<n;i++)
			{
				T[i]=rand()%n;
			}	
		auto t1=chrono::high_resolution_clock::now();
		sort_scalanie(T,p,r);
		auto t2=chrono::high_resolution_clock::now();
		auto duration= chrono::duration_cast<chrono::microseconds>(t2-t1).count();
		delete [] T;
		suma+=duration;
	}
	if(suma%100>50)
	{
		srednia=(suma/100)+1;	
	} 
	else
	{
		srednia=suma/100;
	}
	cout<<endl<<"Sredni czas: "<<srednia<<endl;
*/
	int *T = new int [n];
	for (int i=0; i<n;i++)
		{
			T[i]=rand()%n;
		}
	sort_scalanie(T,p,r);
	delete [] T;
}
