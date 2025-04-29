#include <iostream>
using namespace std;
void push(int value, int*& mass, int& size)
{
	int* tempArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		tempArr[i] = mass[i];
	}
	tempArr[size] = value;
	delete[] mass;
	mass = tempArr;
	size++;
}

void pop(int value, int*& mass, int& size)
{
	int* tempArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		tempArr[i] = mass[i];
	}
	tempArr[size] = value;
	delete[] mass;
	mass = tempArr;
	size--;
}

int main()
{

	int size = 0;
	int *mass = nullptr;
	push(5, mass, size);
	push(6, mass, size);
	pop(5, mass, size);
	for (int i = 0; i < size; i++)
	{
		cout << mass[i];
	}
	delete[] mass;
}