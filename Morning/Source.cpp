#include<iostream>

char * Reverse(char *,int);
char * PReverse(char *, int);

int main()
{
	char letters[] = { "today" };
	int size = 5;
	std::cout << PReverse(letters,size) << std::endl;
	system("pause");
	return 0;
}

char * Reverse(char * letters,int size)
{
	for (int i =1; i<= size/2; i++)
	{
		char temp = letters[i-1];
		letters[i-1] = letters[size-i];
		letters[size - i] = temp;
	}
	return letters;
}
char * PReverse(char* letters, int size)
{
	for (int i = 1; i <= size / 2; i++)
	{
		char temp = *(letters + i - 1);
		*(letters + i - 1) = *(letters + size - i);
		*(letters + size - i) = temp;
	}
	return letters;
}