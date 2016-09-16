#include<iostream>
void RevString(char*);
int CountEven(int *, int);
double *Maximum(double*, int);
bool Contains(char*, char,int);

int main()
{
	//1.
	//a. S
	//b. T
	//c. T
	//d. S
	//e. S
	char c = 'T', d = 'S';
	char *p1 = &c;
	char*p2 = &d;
	char*p3;
	p3 = &d;
	std::cout << "*p3 = " << *p3 << std::endl; // (1)
	p3 = p1;
	std::cout << "*p3 = " << *p3 << std::endl; // (2)
	std::cout << "p3 = " << p3 << std::endl; // (3)
	*p1 = *p2;
	std::cout << "*p1 = " << *p1 << std::endl; // (4)
	std::cout << "p1 = " << p1 << std::endl; // (5)
//2 and 3
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;
	//k = 75;
	//*k = 75;
	//p = 75;
	*p = 75;
	//4
	//the pointer is not the same type as what it is pointing too
	//5.
	//A
	//C  the array is a pointer
	//B
	//A
	//idk
	//A
	//B
	//idk
	//B
	//B  
	//A
	//A
	char word[] = { "death" };
	RevString(word);
	std::cout << word << std::endl;
	//	std::cout << i;
	char something = 1;
	for (int i = 0; i < 100;i++)
	{
		std::cout << something;
	}
	std::cout << std::endl;
	int nums[50];
	for (int i = 0; i < 50; i++)
	{
		nums[i] = i;
	}
	std::cout << CountEven(nums, 50) << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << something;
	}
	std::cout << std::endl;
	double stuff[5] = { 28.989,577.999,577.99,7,1 };
	Maximum(stuff, 5);
	char search = 'a';
	std::cout << Contains(word, search, 5) <<  std::endl;
	/*
	PREDITCTIONS
	NONE OF IT WORKS
	1.
	2.
	3.
	4.
	5.
	*/
	int * ptr_a, ptr_b, *ptr_c;
	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";
	ptr_b = new int;
	*ptr_b = 9;
	cout << *ptr_a << " " << *ptr_b << "\n";
	*ptr_b = *ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";
	delete ptr_a;
	ptr_a = ptr_b;
	cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";
	ptr_c = &ptr_a;
	cout << *ptr_c << " " << **ptr_c << "\n";
	delete ptr_a;
	ptr_a = NULL;
	system("pause");
	return 0;
}

//needs to reverse an array
void RevString(char * array)
{
	for (int j = 0; j < 5; j++)
	{
		for (int i = 1; i + j < 5; i++)
		{
			char temp = *(array + i - 1);
			*(array + i - 1) = *(array + i);
			*(array + i) = temp;
		}
	}
}

//finds the number of even numbers
int CountEven(int *array, int array_len)
{
	int numOfEvens = 0;
	for (int i = 0; i < array_len; i++)
	{
		if (*(array + i) % 2 == 0)
		{
			numOfEvens++;
		}
	}

	return	numOfEvens;
}

double * Maximum(double * array, int array_size)
{
	double * highestPointer=&*array;
	for (int i = 0; i < array_size; i++)
	{
		if (*(array + i) > *highestPointer)
		{
			highestPointer = &*(array + i);
		}
	}
	return highestPointer;
}

bool Contains(char* array, char search_value,int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == search_value)
		{
			return true;
		}
	}
	return false;
}