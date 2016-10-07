#include<iostream>
#include<fstream>
#include<string>

int main()
{
	std::fstream file;
	file.open("cancer.txt", std::ios_base::out);
	std::string harambe;
	while (!file.eof())
	{
		file >> harambe;
		std::cout << harambe;
	}
	file.close();
	system("pause");
	return 0;
}