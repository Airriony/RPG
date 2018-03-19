//Airrion Young
//Lab13

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int choice;

	puts("Welcome to room #5");

	printf("Enter which chest to open");
	puts("1: Red Chest");
	puts("2: Blue Chest");
	puts("3: Gold Chest");
	
	scanf("%d", choice);

	if(choice == 1)
	{
		puts("A dragon has taken incinerated you");
		puts("Game over");
	}
	if(choice == 2)
	{
		puts("You have found the princess");
		puts("The king has offered you a grand reward");
	}
	if(choice == 3)
	{
		puts("You have waged war on a neighboring kingdom");
	}
}
