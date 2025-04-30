#include <iostream>
using namespace std;

void push(int*& arr, int& size, int value)
{
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    arr = newArr;
    size++;
}

void pop(int*& arr, int& size)
{
    if (size > 0)
    {
        int* newArr = new int[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size--;
    }
    else
    {
        cout << "Array is empty, cannot pop." << endl;
    }
}

void display(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int* arr = nullptr;
    int size = 0;

    push(arr, size, 15);
    push(arr, size, 60);
    display(arr, size);
    pop(arr, size);
    display(arr, size);

    delete[] arr;
    return 0;
}
