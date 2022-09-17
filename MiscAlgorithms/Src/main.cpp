#include "CountChars/CountChars.h"

int main()
{
	const char* InFilePath = "TestData\\CountChars_input.txt";
	const char* OutFilePath = "TestData\\CountChars_output.txt";

	try
	{
		MiscAlgorithms::CountChars(InFilePath, OutFilePath);
	} 
	catch (std::exception)
	{
		std::cerr << "Failed to open input or output file." << std::endl;
	};

	return 0;
}