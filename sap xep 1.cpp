#include <iostream> 
using namespace std;

void SelectionSort (int array[], int n)
{
	int min, i, j;
	for (int i = 0; i<n; i++)
	{
		min = i;
		for (int j = i+1; j<n; j++)
		{
			if(array[j]<array[min])
				min = j;
			swap(array[min],array[i]);
		}
			cout << array[i] << " ";
	}

}
int main ()
{
	int n; int array[100];
	cout << "nhap so phan tu cua mang " ; cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "phan tu thu " << i+1 << " la " ;cin >> array[i];
	}
	cout << "sap xep "<< endl;
	SelectionSort(array,n);	
}








