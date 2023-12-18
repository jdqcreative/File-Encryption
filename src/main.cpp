#include <string>
#include <fstream>
#include <iostream>

#include "FileHandler.h"

int main()
{
	FileHandler test("test.txt");

	test.Encrypt(12);
	test.Read();
	std::cout << std::endl;
	test.Decrypt(12);
	test.Read();

	return 0;
}