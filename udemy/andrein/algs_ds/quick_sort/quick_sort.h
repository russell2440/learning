/*
 * quick_sort.h
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

#include <array>
#include <memory>


namespace rs {

class quick_sort_t final {
public:
	quick_sort_t(std::array<int, 11>& array);
	std::array<int, 11> exec();
	void display(std::array<int, 11>& array);

	virtual ~quick_sort_t();

private:
	quick_sort_t(const quick_sort_t &other);
	quick_sort_t(quick_sort_t &&other);
	quick_sort_t& operator=(const quick_sort_t &other);
	quick_sort_t& operator=(quick_sort_t &&other);

	//Select first and last index as 2nd and 3rd parameters
	std::array<int, 11> do_sort(std::array<int, 11> &array, uint32_t left, uint32_t right);

	std::array<int, 11> result_;
};

} /* namespace rs */

#endif /* QUICK_SORT_H_ */
