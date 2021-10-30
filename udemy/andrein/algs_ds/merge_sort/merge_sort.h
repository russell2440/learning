/*
 * merge_sort.h
 *
 *  Created on: Oct 24, 2021
 *      Author: russellshahenian
 */

#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_


#include <vector>


using namespace std;

namespace rs {

class merge_sort  {
	vector<int> &_merge(vector<int> &left, vector<int> &right);
public:
	merge_sort();
	virtual ~merge_sort();
	vector<int> &run (vector<int> &array);
};

} /* namespace rs */

#endif /* MERGE_SORT_H_ */
