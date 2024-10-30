#include <iostream>

using namespace std;

void LinearSearch(int *array, int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(array[i] == target)
            cout << "The Target is in the index Number " << i;
    }
}

int main() {

    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    int *array;
    cout << "Enter the array : ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    int target;

    cout << "Enter a Target : ";
    cin >> target;

    LinearSearch(array, target, size);

    return 0;
}