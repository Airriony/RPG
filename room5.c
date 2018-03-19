//Airrion Young
//Lab13

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int chest;
	char lvlOne = 'a';

	puts("Welcome to room #5");

	printf("Enter which chest to open\n");
	puts("1: Red Chest");
	puts("2: Blue Chest");
	puts("3: Gold Chest");
	
	scanf("%d", &choice);

	if(choice == 1)
	{
		puts("A dragon has taken incinerated you");
		puts("Game over");
	}
	if(choice == 2)
	{
		puts("You have found the princess");
		puts("The king has offered you a grand reward");

		puts("Do you accept the kings reward? y-yes n-no");
		scanf("%c", lvlOne);
	}
	if(choice == 3)
	{
		puts("You have waged war on a neighboring kingdom");
	}
}
