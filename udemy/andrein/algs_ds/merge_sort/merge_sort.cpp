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
	  if (array.size() == 1) {
	    return array;
	  }
//*
printf("array: ");
for(int i = 0; i < array.size(); i++){
	printf(" %d", array[i]);
}
printf("\n");
return array;
//*
	  // Split Array in into right and left
	  vector<int> left, right;

	  return (_merge( run(left), run(right) ) );
}


} /* namespace rs */
