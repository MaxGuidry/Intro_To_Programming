#include<iostream>


//DESCRIPTION: Returns the lower of two values.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The lower of the two values a and b.
template<typename T>
T Min(T a, T b)
{
	T thing;
	(a < b) ? thing = a : thing = b;
	return thing;
}

//DESCRIPTION: Returns the higher of two values.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The higher of the two values a and b.
template<typename T>
T Max(T a, T b)
{
	/*T thing;
	(a > b) ? thing = a : thing = b;
	return thing;*/
	return (a > b) ? a : b;
}

//DESCRIPTION: Constrains a value within the range of two other values.
//	INPUT : Three template arguments(min, max, val).
//	OUTPUT : The value of the val constrained between min and max.
template<typename T>
T Clamp(T min, T max, T val)
{
	T thing;
	(val < min) ? thing = min : (val > max) ? thing = max : thing = val;
	return thing;
}

//DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
//	the function will return the value that is alphabetically lower.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The alphabetically lower of the two values a and b.
template<typename T>
T Min(char a, char b)
{
	T thing;
	if (a <= 90 && a >= 65)
	{
		a += 32;
		if (b <= 90 && b >= 65)
		{
			b += 32;
			(a < b) ? thing = a - 32 : thing = b - 32;
			return thing;
		}
		(a < b) ? thing = a - 32 : thing = b;
		return thing;
	}
	(a < b) ? thing = a : thing = b;
	return thing;
}

//DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
//	the function will return the value that is alphabetically higher.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The alphabetically higher of the two values a and b.
template<typename T>
T Max(char a, char b)
{
	T thing;
	if (a <= 90 && a >= 65)
	{
		a += 32;
		if (b <= 90 && b >= 65)
		{
			b += 32;
			(a > b) ? thing = a - 32 : thing = b - 32;
			return thing;
		}
		(a > b) ? thing = a - 32 : thing = b;
		return thing;
	}
	(a > b) ? thing = a : thing = b;
	return thing;
}

template<typename T>
class Store
{
public:
	Store<T>(int capacity)
	{
		m_data = new T[capacity];
		memset(m_data, 0, 0);
		m_capacity = capacity;
		m_size = 0;
	}
	~Store<T>()
	{
		delete(m_data);
	}
	void Add(T item)
	{
		if (m_size < m_capacity)
		{
			m_data[m_size] = item;
			m_size++;
		}
	}
	
	void Expand()
	{
		m_capacity *= 2;
		T * test = new T[m_capacity];
		memcpy(test, m_data,sizeof(T) * m_size);
		memcpy(m_data, test, sizeof(T)*m_size);
		delete[] test;
	}

	void testPrint()
	{
		for (int i = 0; i < m_capacity; i++)
		{
			std::cout << m_data[i] << ", ";
		}
	}
	T Operator(int index)
	{
		return m_data[index];
	}
private:
	int m_size;
	int m_capacity;
	T * m_data;
};

int main()
{
	Store<int> *test = new Store<int>(3);
	test->Add(4);
	test->Add(5);
	test->Add(1);
	test->testPrint();
	std::cout << std::endl;
	test->Expand();
	test->Add(9);
	test->testPrint();
	std::cout << test->Operator(2);
	system("pause");
	return 0;
}

