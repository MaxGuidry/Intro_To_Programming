#include<iostream>
#include<string>
#include<time.h>
#include<windows.h>

struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int NinjaFightZombie(Zambie &z, Ninja &n)
{
	int NinjaDamageAmount = rand() % 12 + 3;
	std::cout << "====================================================\n";
	std::cout << "ninja is attacking zombie" << std::endl;
	z.health -= NinjaDamageAmount;
	std::cout << "the zombie took " << NinjaDamageAmount << " damage his health is now ->" << z.health << std::endl;
	if (z.health <= 0)
	{
		return 0;
	}
	n.chi -= 1;
	std::cout << "the ninja attacked so his chi is now ->" << n.chi << std::endl << std::endl;
	int ZombieDamageAmount = rand() % 20 + 5;
	std::cout << "====================================================\n";
	std::cout << "zambie is attacking ninja" << std::endl;
	n.health -= ZombieDamageAmount;
	std::cout << "the ninja took " << ZombieDamageAmount << " damage his health is now ->" << n.health << std::endl;
	if (n.health <= 0)
	{
		return 0;
	}
	z.spirit -= 1;
	std::cout << "the zambie attacked so his spirit is now ->" << z.spirit << std::endl;
	std::cout << "====================================================\n";
	return 1;
}

int	ZombieFightNinja(Zambie &z, Ninja &n)
{
	//fix to where ninjas can also attack zombies and user can choose what character they want


	//randomize the damage amount given
	//range of random nnumbers starts at second number with a range of the first number 
	int ZombieDamageAmount = rand() % 20 + 5;
	std::cout << "====================================================\n";
	std::cout << "zambie is attacking ninja" << std::endl;
	n.health -= ZombieDamageAmount;
	std::cout << "the ninja took " << ZombieDamageAmount << " damage his health is now -> [" << n.health << "]" << std::endl;
	if (n.health <= 0)
	{
		return 0;
	}
	z.spirit -= 1;
	std::cout << "the zambie attacked so his spirit is now -> [" << z.spirit << "]" << std::endl;
	int NinjaDamageAmount = rand() % 12 + 3;
	std::cout << "====================================================\n";
	std::cout << "ninja is attacking zambie" << std::endl;
	z.health -= NinjaDamageAmount;
	std::cout << "the zambie took " << NinjaDamageAmount << " damage his health is now -> [" << z.health << "]" << std::endl;
	if (z.health <= 0)
	{
		return 0;
	}
	n.chi -= 1;
	std::cout << "the ninja attacked so his chi is now -> [" << n.chi << "]" << std::endl;
	std::cout << "====================================================\n";
	//fighting is when a zambie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zambie
	//"damage" is when we decrement the health variable of a ninja or zambie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
	return 1;
}
int main()
{
	srand(time(NULL));
	std::cout << "Would you like to play as a zambie or as a ninja?\n'n'for ninja or 'z' for zambie\n\n";
	std::string ZombieOrNinja;
	std::getline(std::cin, ZombieOrNinja); // user inputs n or z to play as ninja or zombie
	std::cout << "\nPress 'a' to attack or press 'q' to quit\n\n";
	Zambie chris = { 90, true, 5 };
	Zambie matthew = { 100, true, 15 };
	Ninja regi = { 50, true, 9 };
	Ninja wilson = { 100, true, 10 };
	//char input = '0';
	std::string input = "";
	//user chooses zombie here
	if (ZombieOrNinja[0] == 'z')
	{
		while (input[0] != 'q')
		{
			std::getline(std::cin, input);
			std::cout << "====================================================\n";
			std::cout << "====================================================\n";

			if (input[0] == 'a')
			{
				if (chris.spirit > 0 && regi.chi > 0)
				{
					std::cout << "\nCHRIS FIGHT REGI\n" << std::endl;
					if(ZombieFightNinja(chris, regi)==0)
						break;
				}
				else if (chris.spirit <= 0)
				{
					std::cout << "You are out of spirit \nYou regen your spirit but the ninja attacks you." << std::endl;
					int NinjaDamageAmount = rand() % 12 + 3;
					std::cout << "====================================================\n";
					std::cout << "ninja is attacking zambie" << std::endl;
					chris.health -= NinjaDamageAmount;
					std::cout << "the zambie took " << NinjaDamageAmount << " damage his health is now -> [" << chris.health << "]" << std::endl;
					if (chris.health <= 0)
						break;
					regi.chi -= 1;
					std::cout << "the ninja attacked so his chi is now -> [" << regi.chi << "]" << std::endl;
					std::cout << "====================================================\n";
					chris.spirit += 5;
					//waits a few seconds to regen your spirit
					for (int i = 0; i < 3; i++)
					{
						Sleep(1200);
						std::cout << ". ";
					}
					std::cout << "\nYou have regened your spirit it is now ->" << chris.spirit << std::endl;
				}
				else if (regi.chi <= 0)
				{
					std::cout << "Ninja is out of chi \nThe ninja regens its chi but you attack it." << std::endl;
					int ZombieDamageAmount = rand() % 20 + 5;
					std::cout << "====================================================\n";
					std::cout << "zambie is attacking ninja" << std::endl;
					regi.health -= ZombieDamageAmount;
					std::cout << "the ninja took " << ZombieDamageAmount << " damage his health is now -> [" << regi.health << "]" << std::endl;
					if (regi.health <= 0)
						break;
					chris.spirit -= 1;
					std::cout << "the zambie attacked so his spirit is now -> [" << chris.spirit << "]" << std::endl;
					std::cout << "====================================================\n";
					regi.chi += 5;
					for (int i = 0; i < 3; i++)
					{
						Sleep(1200);
						std::cout << ". ";
					}
					std::cout << "\nNinja has regened its chi it is now ->" << regi.chi << std::endl;
				}
			}
			if (regi.health <= 0 || chris.health <= 0)
			{
				break;
			}
			std::cout << "\n\n";
		}

		printf("wasted.... GAME OVER\n");
		printf("get guhd lol. \n \a");
	}
	//user chooses ninja here
	else if (ZombieOrNinja[0] == 'n')
	{
		while (input[0] != 'q')
		{
			std::getline(std::cin, input);
			std::cout << "====================================================\n";
			std::cout << "====================================================\n";

			if (input[0] == 'a')
			{
				if (regi.chi > 0 && chris.spirit > 0)
				{
					std::cout << "\nREGI FIGHT CHRIS\n" << std::endl;
					if(NinjaFightZombie(chris, regi)==0)
						break;
				}
				else if (chris.spirit <= 0)
				{
					std::cout << "Zombie is out of spirit \nit regens its spirit but you attack it." << std::endl;
					int NinjaDamageAmount = rand() % 12 + 3;
					std::cout << "====================================================\n";
					std::cout << "you are attacking the zombie" << std::endl;
					chris.health -= NinjaDamageAmount;
					std::cout << "the zombie took " << NinjaDamageAmount << " damage his health is now -> [" << chris.health << "]" << std::endl;
					if (chris.health <= 0)
						break;
					regi.chi -= 1;
					std::cout << "you attacked so your chi is now -> [" << regi.chi << "]" << std::endl;
					std::cout << "====================================================\n";
					chris.spirit += 5;
					//waits a few seconds to regen your spirit
					for (int i = 0; i < 3; i++)
					{
						Sleep(1200);
						std::cout << ". ";
					}
					std::cout << "\n the zombie has regened its spirit it is now ->" << chris.spirit << std::endl;
				}
				else if (regi.chi <= 0)
				{
					std::cout << "Ninja is out of chi \nThe ninja regens its chi but you attack it." << std::endl;
					int ZombieDamageAmount = rand() % 20 + 5;
					std::cout << "====================================================\n";
					std::cout << "zambie is attacking ninja" << std::endl;
					regi.health -= ZombieDamageAmount;
					std::cout << "the ninja took " << ZombieDamageAmount << " damage his health is now -> [" << regi.health << "]" << std::endl;
					if (regi.health <= 0)
						break;
					chris.spirit -= 1;
					std::cout << "the zambie attacked so his spirit is now -> [" << chris.spirit << "]" << std::endl;
					std::cout << "====================================================\n";
					regi.chi += 5;
					for (int i = 0; i < 3; i++)
					{
						Sleep(1200);
						std::cout << ". ";
					}
					std::cout << "\nNinja has regened its chi it is now ->" << chris.spirit << std::endl;
				}
			}
			if (regi.health <= 0 || chris.health <= 0)
			{
				break;
			}
			std::cout << "\n\n";
		}

		printf("wasted.... GAME OVER\n");
		printf("get guhd lol. \n \a");
	}
	system("pause");
	//how i fight??
	return 0;
}
