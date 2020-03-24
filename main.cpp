#include <iostream>
#include "quicksort.h"  //funkcja quicksort(T,p,r)
#include "scalanie.h"   // funckja sort_scalanie(T,p,r)
#include "introsort.h"  // funkcja introsort(T,p,r)
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
int main() {
	int n=10000;					// iloœæ elementów w tablicy
	int p=0;						// indeks 1 elementu
	int r=n-1;						// indeks ostatniego elementu
	int suma=0;						// suma czasów dzia³ania dla 100 tablic
	int srednia;					// œredni czas dzia³ania algorytmu
	double x=0.997;						// ile % pocz¹tkowych indeksów tablicy ma byæ posortowane
	for (int k=0; k<100; k++)
	{
		int *T1 = new int [n];		//tworzenie tablicy dynamicznej o rozmiarze n
		for (int i=0; i<x*n;i++)	// zape³nianie tablicy
			{
				T1[i]=i;
			}
		for (int i=x*n;i<n;i++)
			{
				T1[i]=rand()%n+x*n;
			}
		auto t1=chrono::high_resolution_clock::now(); //pobranie czasu przez rozpoczêciem algorytmu
		introsort(T1,p,r);  //sortowanie tablicy
		auto t2=chrono::high_resolution_clock::now(); //pobranie czasu po zakoñczeniu algorytmu
		auto duration= chrono::duration_cast<chrono::microseconds>(t2-t1).count();  //czas dzia³ania algorytmu
		delete [] T1;
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
	cout<<"Srednia: "<<srednia<<endl;
}
