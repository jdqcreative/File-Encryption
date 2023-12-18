#pragma once

#include <fstream>
#include <iostream>
#include <string>

class FileHandler
{
private:
	std::fstream	m_FileObj;
	std::string		m_FileName;

public:

	FileHandler(std::string filename)
		: m_FileName(filename) 
	{
	
	}

	void OverWrite(const std::string& message);
	void Write(const std::string& message);
	void Read();
	void Encrypt();
};