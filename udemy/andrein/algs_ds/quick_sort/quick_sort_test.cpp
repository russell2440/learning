/*
 * quick_sort_test.cpp
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#include "quick_sort.h"

int main(){
	//const unsigned int numbers = [99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0];
	std::array<int, 11> na = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};

	//Select first and last index as 2nd and 3rd parameters
	rs::quick_sort_t qs(na);

	std::array<int, 11> ra = qs.exec();

	qs.display(ra);

	return 0;
}
