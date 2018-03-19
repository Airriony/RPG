//Airrion Young
//Lab13

#include <stdio.h>
#include <stdlib.h>

void dead(void);
void level1(void);

int main(void)
{
	int chest = 0;
	char lvlOne = 'a';

	puts("Welcome to room #5");

	printf("Enter which chest to open\n");
	puts("1: Red Chest");
	puts("2: Blue Chest");
	puts("3: Gold Chest");
	
	scanf("%d", &chest);

	if(chest == 1)
	{
		puts("A dragon has taken incinerated you");
		puts("Game over");
	}
	if(chest == 2)
	{
		puts("You have found the princess");
		puts("The king has offered you a grand reward");

		puts("Do you accept the kings reward? y-yes n-no");
		scanf("%c", &lvlOne);

		if(lvlOne == 'y')
		{
			level1();
		}
		if(lvlOne == 'n')
		{
			dead();
		}
	}
	if(chest == 3)
	{
		puts("You have waged war on a neighboring kingdom");
	}

	return 0;
}
void dead(void)
{
	puts("You have been killed");
	puts("GAME OVER");
}
void level1(void)
{
	char marry = 'a';

	puts("The king has rewarded you with the princesses hand in marriage");
	puts("Do you accept? y-yes n-no");
	if(marry == 'y')
	{
		puts("Your wedding is next thurday");
		puts("CONGRATULATIONS");
	}
	if(marry == 'n')
	{
		dead();
	}
}
