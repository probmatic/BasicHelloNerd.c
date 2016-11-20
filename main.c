//BasicHelloNerd

#include <stdio.h> //C file input/output functions are defined in this library

int main()
{
	printf("Hello Nerd");
	
	printf("\nPush ENTER to exit"); //Exit statement. \n is a new line
	
	getchar(); //Prevents program from closing right after program runs. Waits for user input.
	
	return 0; //Function main is type int so it should return an integer value
}
