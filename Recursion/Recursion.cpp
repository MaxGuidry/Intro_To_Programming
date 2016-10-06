#include<iostream>
int fibonacci(int);
int power(int, int, int, int);

int main()
{
	for (int i = 0; i < 40; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
	system("pause");
	return 0;
}

int fibonacci(int sequence)
{
	if(sequence <= 1)
		return 1;
	return fibonacci(sequence - 1) + fibonacci(sequence - 2);
}


int power(int base, int exponent, int count, int answer)
{
	if (exponent > 1 && count < exponent)
	{
		answer *= base;
		count++;
		power(base, exponent, count, answer);
	}
	return answer;
}