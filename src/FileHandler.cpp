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

void FileHandler::Encrypt(size_t key)
{
	std::ofstream tempFile;

	m_FileObj.open(m_FileName);
	tempFile.open("temp.txt");

	char ch;

	while (m_FileObj.get(ch))
	{
		ch += key;
		tempFile.put(ch);
	}
	m_FileObj.close();
	tempFile.close();

	std::string name = m_FileName;

	std::remove(name.c_str());
	std::rename("temp.txt", name.c_str());
}

void FileHandler::Decrypt(size_t key)
{
	std::ofstream tempFile;

	m_FileObj.open(m_FileName);
	tempFile.open("temp.txt");

	char ch;

	while (m_FileObj.get(ch))
	{
		ch -= key;
		tempFile.put(ch);
	}
	m_FileObj.close();
	tempFile.close();

	std::string name = m_FileName;

	std::remove(name.c_str());
	std::rename("temp.txt", name.c_str());
}