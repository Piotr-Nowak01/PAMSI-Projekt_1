#include <iostream>
#include "quicksort.h"  //funkcja quicksort(T,p,r)
#include "scalanie.h"   // funckja sort_scalanie(T,p,r)
#include "introsort.h"  // funkcja introsort(T,p,r)
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
int main() {
	int n=1000000;		// ilo�� element�w w tablicy
	int p=0;			// indeks 1 elementu
	int r=n-1;			// indeks ostatniego elementu
	int suma=0;			
	int srednia;		// �redni czas dzia�ania algorytmu
	double x=1;			// ile % pocz�tkowych indeks�w tablicy ma by� posortowane
	for (int k=0; k<1; k++)
	{
		int *T = new int [n];
		for (int i=0; i<n;i++)
			{
				T[i]=rand()%n;
//				cout<<T[i]<<" ";
//			}
//		for (int i=x*n; i<n;i++)
//			{
//				T[i]=n-i;
//				cout<<T[i]<<" ";
			}
		cout<<endl;	
		auto t1=chrono::high_resolution_clock::now();
		sort_scalanie(T,p,r);  //sortowanie tablicy
		auto t2=chrono::high_resolution_clock::now();
		auto duration= chrono::duration_cast<chrono::microseconds>(t2-t1).count();
		for(int i=0;i<n;i++)
		{
//			cout<<T[i]<<" ";
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
