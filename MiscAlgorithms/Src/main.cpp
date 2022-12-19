#include <iostream>

#include "CountChars/CountChars.h"
#include "SimpleCalc/SimpleCalculator.h"

// Unit test functions for misc algorithms
void TestCountCharsAlgorithm();
void TestSimpleCalculatorAlgorithm();

int main()
{
	// TestCountCharsAlgorithm();
	TestSimpleCalculatorAlgorithm();
	return 0;
}

void TestCountCharsAlgorithm()
{
	const char* InFilePath = "TestData\\CountChars_input.txt";
	const char* OutFilePath = "TestData\\CountChars_output.txt";
	MiscAlgorithms::CountChars(InFilePath, OutFilePath);
}

void TestSimpleCalculatorAlgorithm()
{
	// Input 2 integers and sign char
	int a, b;
	char sign;

	std::cout << "Sample inputs: 2 + 5 or 156 * 1234\n";
	std::cin >> a;
	std::cin >> sign;
	std::cin >> b;

	// Perform the algorithm
	int Result = MiscAlgorithms::SimpleCalculator::Implementation(a, b, sign);

	// Output the result
	std::cout << "	= " << Result << '\n';
}