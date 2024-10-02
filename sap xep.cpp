#include <iostream>
using namespace std;

void SelectionSort(int a[],int n)
{
	int min, i, j ;
	for (int i = 0; i<n-1; i++)
	{
		min = i;
		for (int j = i+1; j<n; j++)
		{
			if (a[j]<a[min]) 
				min = j;
			swap(a[min],a[i]);
		}
		cout << a[i] << " ";
	}
}
int main()
{
	int n; int a[100];
	cin>>n;
	for (int i = 0; i<n ; i++)
	{
		cin >> a[i];
	}
	cout << "sap xep " << endl;
	SelectionSort(a,n);
	
}
