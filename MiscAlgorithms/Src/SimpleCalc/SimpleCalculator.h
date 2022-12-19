#pragma once

/*
	Definition a simple calculator algorithm without any branching statements
	(if, witch, or booleans algebra)
*/

namespace MiscAlgorithms
{

	class SimpleCalculator
	{
	public:

		typedef int (*operation_func)(int, int);

		// Main implementation, take 2 integer inputs
		static int Implementation(int A, int B, unsigned char Sign);

		// Functors that perform simple operations between 2 integers
		static int Add(int a, int b)
		{
			return a + b;
		}
		static int Subtract(int a, int b)
		{
			return a - b;
		}
		static int Multiply(int a, int b)
		{
			return a * b;
		}
		static int Divide(int a, int b)
		{
			return a / b;
		}
	};
}