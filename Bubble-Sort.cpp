#include <iostream>

using namespace std;

void printing(int *array, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
void bubblesort(int *array, int size)
{
	int s;

	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				s = array[j];
				array[j] = array[j + 1];
				array[j + 1] = s;
			}
		}
	}
}

int main()
{
	int size;

	cout << "enter the size of the array : ";
	cin >> size;

	int *array;

	cout <<"enter " << size << " elements by leaving space between each : ";
	for(int i = 0; i < size; i++)
		cin >> array[i];
	
	bubblesort(array, size);
	printing(array, size);
}