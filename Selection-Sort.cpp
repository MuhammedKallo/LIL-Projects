#include <iostream>

using namespace std;

void printing(int *array, int size)
{
	for(int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

void SelectionSort(int *array, int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		int min = i;

		for(int j = i + 1; j < size; j++)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			int s;
			s = array[i];
			array[i] = array[min];
			array[min] = s;
		}
	}
}

int main()
{
	int size;

	cout << "Enter the size of the array : ";
	cin >> size;

	int *array;

	cout << "Enter " << size << " Numbers : ";
	for(int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	SelectionSort(array, size);
	printing(array, size);
}