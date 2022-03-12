/*
 * quick_sort.cpp
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#include "quick_sort.h"
#include <string>
#include <iostream>


std::vector<int>
rs::quick_sort_t::exec()
{
	display("exec",input_);

	this->result_ = this->do_sort(input_, 0, input_.size()-1);

	this->display("exec",this->result_);

	return this->result_;
}


std::vector<int>
rs::quick_sort_t::do_sort(std::vector<int>& array, uint32_t left, uint32_t right)
{
	uint32_t pivot;
	uint32_t partitionIndex;

	if(left < right)
	{
		pivot = right;
		partitionIndex = partition(array, pivot, left, right);

		//sort left and right
		do_sort(array, left, partitionIndex - 1);
		do_sort(array, partitionIndex + 1, right);
	}
	return array;
}


uint32_t
rs::quick_sort_t::partition(std::vector<int>& array, uint32_t pivot, uint32_t left, uint32_t right)
{
	uint32_t pivotValue = array[pivot];
	uint32_t partitionIndex = left;

	for(auto i = left; i < right; i++) {
		if(array[i] < pivotValue){
		  swap(array, i, partitionIndex);
		  partitionIndex++;
		}
	}
	swap(array, right, partitionIndex);
	return partitionIndex;
}


void
rs::quick_sort_t::swap(std::vector<int>& array, uint32_t firstIndex, uint32_t secondIndex)
{
	    int temp = array[firstIndex];
	    array[firstIndex] = array[secondIndex];
	    array[secondIndex] = temp;
}



void
rs::quick_sort_t::display(std::string s, std::vector<int>& array){
	std::cout << s <<": ";
	for(int i=0; i < array.size(); ++i)
		printf("%d,",array[i]);
	printf("\n");
}

