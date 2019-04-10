#pragma once
#ifndef __ALGORITHMS_CPP__
#define __ALGORITHMS_CPP__
#include"Algorithms.h"

namespace CLRS
{
	template<typename DataType>
	inline void Swap(DataType &x, DataType &y)
	{
		DataType z = x;
		x = y;
		y = z;
	}

	template<typename DataType>
	void QuickSort(DataType * Array, int p, int r)
	{
		if (p < r)
		{
			int q = Partition(Array, p, r);
			QuickSort(Array, p, q - 1);
			QuickSort(Array, q + 1, r);
		}
	}

	template<typename DataType>
	int Partition(DataType * Array, int p, int r)
	{
		DataType x = Array[r];
		int i = p - 1;
		for (int j = p; j < r; j++)
		{
			if (Array[j] < x)
			{
				i++;
				Swap(Array[i], Array[j]);
			}
		}
		Swap(Array[i + 1], Array[r]);
		return i + 1;
	}

}

#endif