#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
    int i, j , min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
    }
}

int main()
{
    int a[100];
    int n;
    cout << "nhap so n "; cin >> n;
    for (int i = 0; i<n; i++)
    {
        cout << "nhap phan tu thu " << i+1 << ": " ;
        cin >> a[i];
    }
    cout << "================== SAP XEP ==================" << endl;
    SelectionSort(a,n);
    cout << endl << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

