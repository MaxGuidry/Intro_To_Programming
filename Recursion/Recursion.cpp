#include<iostream>
int fibonacci(int);
int power(int, int, int, int);
int hanoi(int, int, int, int);


int main()
{
	for (int i = 0; i < 30; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
	std::cout << "\n\n";
	int numofdiscs;
	std::cin >> numofdiscs;
	hanoi(numofdiscs , 1, 2, 3);
	system("pause");
	return 0;
}

int fibonacci(int sequence)
{
	if (sequence <= 1)
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

int hanoi(int disc, int start, int mid, int last)
{
	if (disc <= 0)
		return 1;
	else
	{
		hanoi(disc - 1, start, last, mid);
		std::cout << "move disc " << disc << " from peg " << start << " to peg " << last << "\n";
		hanoi(disc -1, mid, start , last);
	}
}