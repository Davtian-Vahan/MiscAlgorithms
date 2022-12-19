#include "SimpleCalculator.h"
#include <array>

using namespace MiscAlgorithms;

int SimpleCalculator::Implementation(int A, int B, char Sign)
{
	// allocation operations and populate with null pointers {}
	const size_t ascii_count = 1000;
	std::array<operation_func, ascii_count> operations{};

	// associate function pointers with respective indices, note: rest are null pointers
	operations['+'] = &SimpleCalculator::Add;
	operations['-'] = &SimpleCalculator::Subtract;
	operations['*'] = &SimpleCalculator::Multiply;
	operations['/'] = &SimpleCalculator::Divide;

	return operations[Sign](A, B);
}

