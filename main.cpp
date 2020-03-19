#include <iostream>
#include "quicksort.h"  //funkcja quicksort
#include "scalanie.h"   // funckja sort_scalanie
#include "introsort.h"  // funkcja introsort
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
	for (int k=0; k<1; k++)
	{
		int *T = new int [n];
		for (int i=0; i<n;i++)
			{
				T[i]=n-i;
//				cout<<T[i]<<" ";
			}	
			cout<<endl;
		auto t1=chrono::high_resolution_clock::now();
		quicksort(T,p,r);  //sortowanie tablicy
		auto t2=chrono::high_resolution_clock::now();
		auto duration= chrono::duration_cast<chrono::microseconds>(t2-t1).count();
				for (int i=0; i<n;i++)
			{
//				cout<<T[i]<<" ";
			}	
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

}
