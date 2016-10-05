#include<iostream>
#include<fstream>
#include<string>

int main()
{
	std::fstream file;
	file.open("cancer.txt", std::ios_base::out);
	std::string stuff;	
	std::getline(std::cin, stuff);
	file << stuff;
	while (!file.eof())
	{
		std::cout << file << std::endl;
	}
	file.close();
	system("pause");
	return 0;
}