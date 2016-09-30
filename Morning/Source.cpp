#include<iostream>

class Cat
{
private:
	char m_Name;
public:
	Cat() {}
	void NameMe(char n)
	{
		m_Name = n;
	}
};
void Naming(Cat*,int);

int main()
{
	Cat Cats[26];
	int i = 0;
	Naming(Cats,i);
	/*Cat Cats[26];
	int i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
		{
			Cats[i].NameMe(i + 65);
		}
		else
		{
			Cats[i].NameMe(i + 97);
		}
		i++;
	}*/
	system("pause");
	return 0;
}

void Naming(Cat *array,int count)
{
	(count % 2 == 0) ? array[count].NameMe(count + 65) : array[count].NameMe(count + 97);
	if (count++ < 26)
		Naming(array, count);
}