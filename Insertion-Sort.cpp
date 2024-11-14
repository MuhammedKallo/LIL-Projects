#include <iostream>

using namespace std;

void printing(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void insertionsort(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        
        while (j > 0 && array[j - 1] > array[j])
        {
            int temp;
            temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }
}
    
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int array[size];
    cout << "Write the array : ";
    for(int i = 0; i < size; i++)
        cin >> array[i];

    insertionsort(array, size);
    printing(array, size);

    return (0);
}
