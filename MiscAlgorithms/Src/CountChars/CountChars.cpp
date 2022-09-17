#include "CountChars.h"

// Functions definitions for CountChars
namespace MiscAlgorithms
{
	void CountChars(const char* InFileName, const char* OutFileName)
	{
		std::ifstream InFileHandle(InFileName, std::ios_base::in);
		std::ofstream OutFileHandle(OutFileName, std::ios_base::out);

		// Exit conditions
		if (!InFileHandle.is_open() || !OutFileHandle.is_open())
		{
			throw std::exception();
		}

		// Call actual implementation
		CountChars_Impl(InFileHandle, OutFileHandle);

		// Clear the handles
		InFileHandle.close();
		OutFileHandle.close();
	}

	void CountChars_Impl( std::ifstream& InFile, std::ofstream& OutFile)
	{
		// Cache data for the counts
		constexpr int Ascii_Len = 127; // 2^8 - 1
		unsigned long Counts[Ascii_Len]{};
		char CharRead = '\0';

		// Read the counts O(n)
		while (InFile.get(CharRead))
		{
			++Counts[int(CharRead)];
		}

		// Clear the output file, write the counts
		for (int i = 0; i < Ascii_Len; ++i)
		{
			// Skip white spaces and invisible chars
			if (std::isspace(i)) continue;
			OutFile << ". " << char(i) << " - " << std::setw(5) << Counts[i] << '\n';
		}
	}
}