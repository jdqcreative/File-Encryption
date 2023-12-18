#include <string>
#include <fstream>
#include <iostream>

#include "FileHandler.h"

int main()
{
	FileHandler test("test.txt");

	test.OverWrite("Hello");
	test.Write(" World");
	test.Read();
	test.Encrypt();

	return 0;
}