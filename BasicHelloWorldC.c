//BasicHelloWorld

#include <stdio.h> //C file input/output functions are defined in this library

int main()
{
	/*DECLARATIONS*/

	char exit = 'e'; //declares a character as my exit variable

	/*OUTPUT*/
	//				\n is enter			\t is tab

	printf("\n\n\n\t\t\t\tHELLO WORLD!");
	
	/*EXIT ROUTINE*/
	printf("\n\n\nPush ENTER to exit");
	scanf("%c", &exit);

	return 0;
}
