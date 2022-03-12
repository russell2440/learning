/*
 * quick_sort_test.cpp
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#include "quick_sort.h"
#include <string>
#include <initializer_list>

int main(){
	std::initializer_list<int> l = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};

	std::vector<int> na(l);

	rs::quick_sort_t qs(na);

	qs.display("na", na);

	std::vector<int> ra = qs.exec();

	qs.display("ra", ra);

	return 0;
}
