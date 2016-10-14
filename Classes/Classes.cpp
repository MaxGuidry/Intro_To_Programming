#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include<map>
#include<conio.h>



template<typename T>
class Bucket
{
public:
	Bucket(int size) :m_size(size) {};
	bool Add(T& a);
	const int m_size;
	T items[m_size];
};
template<class T>
bool Bucket<T>::Add(T & a)
{
	a = items[0];
	return true;
}


int main()
{
	Bucket<int> nums = Bucket<int>(10);
	int thingy = 2;
	nums.Add(thingy);
	system("pause");
	return 0;
}

