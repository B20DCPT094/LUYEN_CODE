#include <iostream>
using namespace std;

int main(){
	int m, n, x;
	cin >> m >> n >> x;
	int arr[m][n];

	int brr[m]; // mang phu dua theo so phan tu cua hang

	for (int i = 0; i < m; i++)
	{
	    for (int j = 0; j < n; j++)
	    {
	        cin >> arr[i][j];
	        if ((x - 1) == j)
	        {
	            brr[i] = arr[i][j];
	        }
	    }
	}

	// sap xep

	for (int i = 0; i < m - 1; i++)
	{
	    for (int j = i + 1; j < m; j++)
	    {
	        if (brr[i] > brr[j])
	        {
	            swap(brr[i], brr[j]);
	        }
	    }
	}

	// xuat

	for (int i = 0; i < m; i++)
	{
	    for (int j = 0; j < n; j++)
	    {
	        if ((x - 1) == j)
	        {
	            cout << brr[i] << ' ';
	        }
	        else
	        {
	            cout << arr[i][j] << ' ';
	        }
	    }
	    cout << endl;
	}
	return 0;
}