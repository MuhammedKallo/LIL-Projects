#include <iostream>

using namespace std;

void printing(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void insertionsort(int *array, int size)
{
    int key, j, i;
    for(i = 1; i < size; i++)
    {
        key = array[i];
        j = i;
    
        while(j > 0 && array[j -1] > key)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
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
