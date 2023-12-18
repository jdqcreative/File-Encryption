#include "FileHandler.h"

void FileHandler::OverWrite(const std::string& message)
{
	std::cout << message << std::endl;

	m_FileObj.open(m_FileName, std::ios::out);

	if (m_FileObj.is_open())
	{
		m_FileObj << message;
		m_FileObj.close();
	}
	else
	{
		std::cerr << "Error opening file." << std::endl;
	}
}

void FileHandler::Write(const std::string& message)
{
	std::cout << message << std::endl;

	m_FileObj.open(m_FileName, std::ios::app);

	if (m_FileObj.is_open())
	{
		m_FileObj << message;
		m_FileObj.close();
	}
	else
	{
		std::cerr << "Error opening file." << std::endl;
	}
}

void FileHandler::Read()
{
	m_FileObj.open(m_FileName, std::ios::in);

	std::string line;

	while (std::getline(m_FileObj, line))
	{
		std::cout << line << std::endl;
	}
	m_FileObj.close();
}

void FileHandler::Encrypt()
{
	
}