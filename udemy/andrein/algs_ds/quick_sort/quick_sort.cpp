/*
 * quick_sort.cpp
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#include "quick_sort.h"


rs::quick_sort_t::quick_sort_t(std::array<int, 11>& array) {
	// TODO Auto-generated constructor stub
}


std::array<int, 11>
rs::quick_sort_t::exec(){
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

	function swap(array, firstIndex, secondIndex){
	    var temp = array[firstIndex];
	    array[firstIndex] = array[secondIndex];
	    array[secondIndex] = temp;
	}
#endif
		return this->result_;
}


void
rs::quick_sort_t::display(std::array<int, 11>& array){
}


rs::quick_sort_t::~quick_sort_t() {
	// TODO Auto-generated destructor stub
}

rs::quick_sort_t::quick_sort_t(const rs::quick_sort_t &other) {
	// TODO Auto-generated constructor stub

}

rs::quick_sort_t::quick_sort_t(rs::quick_sort_t &&other) {
	// TODO Auto-generated constructor stub

}

rs::quick_sort_t& rs::quick_sort_t::operator=(const rs::quick_sort_t &other) {
	// TODO Auto-generated method stub
	return *this;
}

rs::quick_sort_t& rs::quick_sort_t::operator=(rs::quick_sort_t &&other) {
	// TODO Auto-generated method stub
	return *this;
}


std::array<int, 11>
rs::quick_sort_t::do_sort(std::array<int, 11>& array, uint32_t left, uint32_t right){
	return array;
}

