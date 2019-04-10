#include <iostream>
#include "Algorithms.h"

int main()
{
	int x = 0, y = 1;
	int *arr = new int[10];
	for (int i = 9; i >= 0; i--)
	{
		arr[i] = i;
	}
	CLRS::QuickSort(arr, 0, 9);
	CLRS::Swap(x, y);
	std::cout << x << " " << y << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}