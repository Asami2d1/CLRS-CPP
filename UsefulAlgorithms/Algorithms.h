#pragma once
#ifndef __ALGORITHMS_H__
#define __ALGORITHMS_H__

namespace CLRS
{
	template<typename DataType>
	inline void Swap(DataType &x, DataType &y);

	template<typename DataType>
	void QuickSort(DataType *Array, int p, int r);

	template<typename DataType>
	int Partition(DataType *Array, int p, int r);
}

#include "Algorithms.cpp"
#endif