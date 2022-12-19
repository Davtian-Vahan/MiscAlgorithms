#include "SimpleCalculator.h"
#include <array>
#include <stdexcept>  

using namespace MiscAlgorithms;

int SimpleCalculator::Implementation(int A, int B, unsigned char Sign)
{
	// allocation operations and populate with null pointers {}
	const size_t ascii_count = 1000;
	std::array<operation_func, ascii_count> operations{};

	// associate function pointers with respective indices, note: rest are null pointers
	operations['+'] = &SimpleCalculator::Add;
	operations['-'] = &SimpleCalculator::Subtract;
	operations['*'] = &SimpleCalculator::Multiply;
	operations['/'] = &SimpleCalculator::Divide;

	int result = -1;
	size_t index = (size_t)(Sign);
	
	if (operations[index] == nullptr)
	{
		throw std::out_of_range("No such operation supported.");
	}

	return operations[Sign](A, B);
}

