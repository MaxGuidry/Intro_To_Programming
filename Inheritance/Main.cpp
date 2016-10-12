#include<iostream>
#include"Enemy.h"
#include<time.h>

int main()
{
	Bird Dis = Bird();
	Cat Dat = Cat();
	Dog Dop = Dog();
	Mammal ayy = Mammal();
	Animal * here;
	here = &Dis;
	here->speak();
	here = &Dat;
	here->speak();
	here = &Dop;
	here->speak();
	here = &ayy;
	here->speak();

	/*srand(time(NULL));
	Enemy * Dude = new Orc(1000, 20, "Boss");
	Enemy * Hunchback = new Troll(2, 1, "Wuss");
	Enemy CaveEnemies[2] = { *Dude , *Hunchback };
	for (int i = 0; i < 2; i++)
	{
		Dude->Attack();
		Hunchback->Attack();

	}*/

	system("pause");
	return 0;
}