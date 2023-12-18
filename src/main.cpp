#include <string>
#include <fstream>
#include <iostream>

#include "FileHandler.h"

int main()
{
	FileHandler test("testies.txt");

	test.OverWrite("Hello");
	test.Write(" World");
	test.Read();

	return 0;
}