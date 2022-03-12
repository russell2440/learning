/*
 * quick_sort.h
 *
 *  Created on: Jan 8, 2022
 *      Author: russellshahenian
 */

#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

#include <vector>
#include <memory>


namespace rs
{

	class quick_sort_t final
	{
	public:
		quick_sort_t(std::vector<int>& array)
		: input_(array)
		, result_()
		{}

		std::vector<int> exec();
		void display(std::string fn, std::vector<int>& array);


	private:

		//Select first and last index as 2nd and 3rd parameters
		std::vector<int> do_sort(std::vector<int> &array, uint32_t left, uint32_t right);
		uint32_t partition(std::vector<int>& array, uint32_t pivot, uint32_t left, uint32_t right);
		void swap(std::vector<int>& array, uint32_t firstIndex, uint32_t secondIndex);

		std::vector<int> input_;
		std::vector<int> result_;
	};

} /* namespace rs */

#endif /* QUICK_SORT_H_ */
