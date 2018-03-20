//Airrion Young
//Lab13

#include <stdio.h>
#include <stdlib.h>

void dead(void);
void level1(int option);
//void level2(void);

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
		puts("A dragon has incinerated you");
		puts("Game over");
	}
	if(chest == 2)
	{
		puts("You have found the princess");
		puts("The king has offered you a grand reward");
		level1(2);
	}
	if(chest == 3)
	{
		puts("You have waged war on a neighboring kingdom");
		level1(3);
	}

	return 0;
}
void dead(void)
{
	puts("You have been killed");
	puts("GAME OVER");
}
void level1(int option)
{
	char marry = 'a';
	char reward = 'a';
	
	if(option == 2)
	{
		printf("Do you accept the king's reward? y-yes n-no");
		scanf(" %c",&reward);
		if(reward == 'y')
		{
	
			puts("The king has rewarded you with the princesses hand in marriage");
			puts("Do you accept? y-yes n-no");
			scanf(" %c", &marry);
			if(marry == 'y')
			{
				puts("Your wedding is next thurday");
				puts("CONGRATULATIONS");
				
				//level2(1);
			}
			if(marry == 'n')
			{
				puts("The  King is displeased with you");
				puts("The King has waged war against you");
				//level2(2);
			}
		}
		if(reward == 'n')
		{
			dead();
		}
	}
	if(option == 3)
	{
		//Waging War

		//level2(); 
	}
}
void level2(void)
{
	puts("LEVEL 2: WAR")	

}
