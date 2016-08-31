#include<iostream>
#include<time.h>
void practiceArrays();
void loopingAndInitializing();
void storingUserInputInArrays();
void sortingUserInputNumbers();
void twoDimensionalArray();
void characterHealth();


int main()
{
	characterHealth();
	system("pause");
	return 0;
}

/* number 1
a.valid
b.invalid- 7 numbers are declared but only 5 spaces are there
c.valid but not good because there are undeclared spaces in the array
d.valid but not good because there are undeclared spaces in the array
e.valid
f.nothing is declared either no memory is allotted or infinite memory is allotted
g.invalid starts at 0 cant be negative
h.invalid needs scope operators
*/

/*number 2
a.10
b.
c.6
d.14
e.error
*/



//number 3	
void loopingAndInitializing()
{
	int data[10];
	for (int i = 10; i > 0; i--)
	{
		data[i-1] = i;
		std::cout << data[i-1] << std::endl;
	}

}
//number4
void storingUserInputInArrays()

{
	int userInputArray[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		std::cin >> userInputArray[i];

	}
	std::cout << std::endl;
	for (i; i > 0; i--)
	{
		std::cout << userInputArray[i-1] << std::endl;
	}
}
//number5
void sortingUserInputNumbers()
{
	int tenUserValues[10];
	int i = 0;
	for (i; i < 10; i++)
	{
		std::cin >> tenUserValues[i];
	}
	for (i; i >= 0; i--)
	{
		for (int j=0; j < 10; j++)
		{
			if (tenUserValues[j] < tenUserValues[j+1])
			{
				int temp;
				temp = tenUserValues[j];
				tenUserValues[j] = tenUserValues[j + 1];
				tenUserValues[j + 1] = temp;
			}
		}
	}
	
		std::cout << tenUserValues[0] << " " << tenUserValues[9] << std::endl;
}

void twoDimensionalArray()
{
	int twoDimensions[3][3];
	int h = 1;
	for(int i =0; i<3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			twoDimensions[i][j] = h;
			std::cout << twoDimensions[i][j] << std::endl;
			h++;
		}
	}
}

void sumTwoDimensionalArray()
{
	int arrayInTwoDimensions[29][5];
	for (int i =0;i <29;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int sumi = 0;
			int sumj = 0;
			arrayInTwoDimensions[i][j] = i;
			sumi = sumi + arrayInTwoDimensions[i][j];
		}
	}
}

void characterHealth()
{
	srand(time(NULL));
	int healthLevels[5] = { 100,100,100,100,100 };
	int characterNumber;
	int healthSum = 1;
	std::cout << "Attack characters:0-4" << std::endl;
	
	while (healthSum>0)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Character " << i << " has " << healthLevels[i] << " left" << std::endl;
		}
		std::cin >> characterNumber;

		int damageAmount = rand() % 100 + 1;
		if (healthLevels[characterNumber] > 0)
		{
			healthLevels[characterNumber] = healthLevels[characterNumber] - damageAmount;
			if (healthLevels[characterNumber] <= 0)
			{
				healthLevels[characterNumber] = 0;
				std::cout << "Character " << characterNumber << " is dead." << std::endl;
			}
		}
		else if (characterNumber<5 && characterNumber>-1)
		{
			std::cout << "Character " << characterNumber << " already dead." << std::endl;
		}
		else
		{
			std::cout << "This character does not exist." << std::endl;
		}
		for (int j = 0; j < 5; j++)
		{
			healthSum = 0;
			healthSum = healthSum + healthLevels[j];
		}
	}
}

void practiceArrays()
{
	int arrayofnumbers[11] = { 50,51,52,53,54,55,56,57,58,59,60 };

	for (int i = 0; i <= 10; i++)
	{
		std::cout << arrayofnumbers[i] << std::endl;
	}
	return;
}
