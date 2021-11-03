/*
 * merge_sort.cpp
 *
 *  Created on: Oct 24, 2021
 *      Author: russellshahenian
 */

#include "merge_sort.h"
#include <cstdio>

namespace rs {

merge_sort::merge_sort() {
	// TODO Auto-generated constructor stub

	printf("Heellllooooo Russell!!\n");
}

merge_sort::~merge_sort() {
	// TODO Auto-generated destructor stub
}


vector<int> &merge_sort::_merge(vector<int> &left, vector<int> &right){
	vector<int>	*merged = new vector<int>();

	return(*merged);
}

vector<int> &merge_sort::run (vector<int> &array){
display(array);
	// Base case
	if (array.size() == 1) {
	    return array;
	  }
	// Split Array in into right and left
	vector<int> left, right;
	unsigned int len = array.size();
	left.resize(len/2,0);
	if (0 == len%2){
	  // Even split
	  right.resize(len/2,0);
	}
	else{
	  // Odd split
	  right.resize(len/2+1,0);
	}
	// copy array contents
	for(unsigned int i = 0; i < left.size(); i++){
	  left[i] = array[i];
	}
	for(unsigned int i = 0; i < right.size(); i++){
	  right[i] = array[(len/2)+i];
	}

	return (_merge( run(left), run(right) ) );
}


} /* namespace rs */
