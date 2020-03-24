#include <iostream>
#include "quicksort.h"  //funkcja quicksort(T,p,r)
#include "scalanie.h"   // funckja sort_scalanie(T,p,r)
#include "introsort.h"  // funkcja introsort(T,p,r)
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
int main() {
	int n=10000;		// ilo�� element�w w tablicy
	int p=0;			// indeks 1 elementu
	int r=n-1;			// indeks ostatniego elementu
	int suma=0;			
	int srednia;		// �redni czas dzia�ania algorytmu
	double x=1;			// ile % pocz�tkowych indeks�w tablicy ma by� posortowane
	for (int k=0; k<100; k++)
	{
		int *T1 = new int [n];	//tworzenie tablicy dynamicznej o rozmiarze n
		for (int i=0; i<n;i++)	// zape�nianie tablicy
			{
				T1[i]=n-i;
			}
		auto t1=chrono::high_resolution_clock::now(); //pobranie czasu przez rozpocz�ciem algorytmu
		quicksort(T1,p,r);  //sortowanie tablicy
		auto t2=chrono::high_resolution_clock::now(); //pobranie czasu po zako�czeniu algorytmu
		auto duration= chrono::duration_cast<chrono::microseconds>(t2-t1).count();  //czas dzia�ania algorytmu
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
