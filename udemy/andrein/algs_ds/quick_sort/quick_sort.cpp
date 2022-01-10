/*
 * quick_sort.cpp
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#include "quick_sort.h"


rs::quick_sort_t::quick_sort_t(std::vector<int>& array) {
	// TODO Auto-generated constructor stub
}


std::vector<int>
rs::quick_sort_t::exec(){
	result_ = this->do_sort(input_, 0, input_.size()-1);

	return this->result_;
}


void
rs::quick_sort_t::display(std::vector<int>& array){
}


rs::quick_sort_t::~quick_sort_t() {
	// TODO Auto-generated destructor stub
}


std::vector<int>
rs::quick_sort_t::do_sort(std::vector<int>& array, uint32_t left, uint32_t right){
#if 0
	function quickSort(array, left, right){
	  const len = array.length;
	  let pivot;
	  let partitionIndex;

	  if(left < right) {
	    pivot = right;
	    partitionIndex = partition(array, pivot, left, right);

	    //sort left and right
	    quickSort(array, left, partitionIndex - 1);
	    quickSort(array, partitionIndex + 1, right);
	  }
	  return array;
	}
#endif
	return array;
}


void
rs::quick_sort_t::partition(std::vector<int>& array, uint32_t pivot, uint32_t left, uint32_t right){
#if 0
	function partition(array, pivot, left, right){
	  let pivotValue = array[pivot];
	  let partitionIndex = left;

	  for(let i = left; i < right; i++) {
	    if(array[i] < pivotValue){
	      swap(array, i, partitionIndex);
	      partitionIndex++;
	    }
	  }
	  swap(array, right, partitionIndex);
	  return partitionIndex;
	}

#endif
}


void
rs::quick_sort_t::swap(std::vector<int>& array, uint32_t firstIndex, uint32_t secondIndex){
#if 0
	function swap(array, firstIndex, secondIndex){
	    var temp = array[firstIndex];
	    array[firstIndex] = array[secondIndex];
	    array[secondIndex] = temp;
	}

#endif
}


