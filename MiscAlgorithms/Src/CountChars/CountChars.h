#pragma once

#include <fstream>
#include <iostream>
#include <iomanip>

namespace MiscAlgorithms
{
	void CountChars(const char* InFileName, const char* OutFileName);
	void CountChars_Impl(std::ifstream& InFile, std::ofstream& OutFile);
}