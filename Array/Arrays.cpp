#include<iostream>
#include<time.h>
#include<string>
#include<windows.h>
void practiceArrays();
void loopingAndInitializing();
void storingUserInputInArrays();
void sortingUserInputNumbers();
void twoDimensionalArray();
void sumTwoDimensionalArray();
void characterHealth();
void GameOfThrones();

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
		data[i - 1] = i;
		std::cout << data[i - 1] << std::endl;
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
		std::cout << userInputArray[i - 1] << std::endl;
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
		for (int j = 0; j < 10; j++)
		{
			if (tenUserValues[j] < tenUserValues[j + 1])
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
//number6
void twoDimensionalArray()
{
	int twoDimensions[3][3];
	int h = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			twoDimensions[i][j] = h;
			std::cout << twoDimensions[i][j] << " ";
			h++;

		}
		std::cout << std::endl;
	}
}
//number7
void sumTwoDimensionalArray()
{

	int arrayInTwoDimensions[29][5];
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayInTwoDimensions[i][j] = i;

		}
	}
	int sumrow;
	for (int h = 0; h < 29; h++)
	{
		sumrow = 0;


		for (int g = 0; g < 5; g++)
		{
			sumrow = sumrow + arrayInTwoDimensions[h][g];
		}


		std::cout << sumrow << std::endl;
	}
	std::cout << std::endl;
	int sumcolumn;
	for (int h = 0; h < 5; h++)
	{
		sumcolumn = 0;


		for (int g = 0; g < 29; g++)
		{
			sumcolumn = sumcolumn + arrayInTwoDimensions[g][h];
		}


		std::cout << sumcolumn << std::endl;
	}

}
//number8
//Mine runs more than 5 times because I wanted a working game so it runs until they are all dead.
void characterHealth()
{
	srand(time(NULL));
	int healthLevels[5] = { 100,100,100,100,100 };
	int characterNumber;
	int healthSum = 1;
	std::cout << "Attack characters:0-4" << std::endl;

	while (healthSum > 0)
	{
		healthSum = 0;
		for (int i = 0; i < 5; i++)
		{
			Sleep(100);
			std::cout << "Character " << i << " has " << healthLevels[i] << " left" << std::endl;
		}
		std::cin >> characterNumber;
		int damageAmount = rand() % 75 + 1;
		if (characterNumber<5 && characterNumber>-1)
		{

			if (healthLevels[characterNumber] > 0)
			{
				healthLevels[characterNumber] = healthLevels[characterNumber] - damageAmount;
				if (healthLevels[characterNumber] <= 0)
				{
					std::cout << "Character " << characterNumber << " is dead." << std::endl;
				}
			}
			else if (characterNumber<5 && characterNumber>-1)
			{
				std::cout << "Character " << characterNumber << " already dead." << std::endl;
			}
		}
		else
		{
			std::cout << "This character does not exist." << std::endl;
		}
		for (int j = 0; j < 5; j++)
		{
			if (healthLevels[j] < 0)
			{
				healthLevels[j] = 0;
			}
			healthSum = healthSum + healthLevels[j];
		}
	}
	std::cout << "Everyone is dead." << std::endl;
}


void GameOfThrones()
{
	int dragonFood[3][7];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			std::cin >> dragonFood[i][j];
		}
	}
	float dragonOneAvg;
	int dragonOneSum = 0;
	float dragonTwoAvg;
	int dragonTwoSum = 0;
	float dragonThreeAvg;
	int dragonThreeSum = 0;
	int totalAvg;
	//calculating individual sum of each dragon to get the average later
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i == 0)
			{
				dragonOneSum = dragonOneSum + dragonFood[i][j];
			}
			else if (i == 1)
			{
				dragonTwoSum = dragonTwoSum + dragonFood[i][j];
			}
			else if (i == 2)
			{
				dragonThreeSum = dragonThreeSum + dragonFood[i][j];
			}
		}
	}
	int x = 0;
	int least = dragonFood[0][0];
	int greatest = dragonFood[0][0];
	//sort food of each dragon
	for (int y = 0; y < 20; y++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (dragonFood[i][j] < dragonFood[i][j + 1])
				{
					int temp;
					temp = dragonFood[i][j];
					dragonFood[i][j] = dragonFood[i][j + 1];
					dragonFood[i][j + 1] = temp;
				}
				
				/*if (dragonFood[i][j] < dragonFood[i + 1][j])
				{
					int temp;
					temp = dragonFood[i][j];
					dragonFood[i][j] = dragonFood[i + 1][j];
					dragonFood[i + 1][j] = temp;
				}*/
				
			}
		}
	}
	dragonOneAvg = (float)dragonOneSum / 7.0f;
	dragonTwoAvg = (float)dragonTwoSum / 7.0f;
	dragonThreeAvg = (float)dragonThreeSum / 7.0f;
	totalAvg = (dragonOneSum + dragonTwoSum + dragonThreeSum) / 21;
	std::cout << "Dragon one average: " << dragonOneAvg << std::endl << "Dragon two average ";
	std::cout << dragonTwoAvg << std::endl << "Dragon three average " << dragonThreeAvg << std::endl;
	std::cout << "Total average: " << totalAvg << std::endl;
	std::cout << "Greatest " << greatest << std::endl << "Least " << least << std::endl;
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