#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    int input;
    //string input = "";
	do
	{
	printf("London is a capital of Great Britan?\n");
	input = GetChar();
	}
	while (input <= 0);
	
	
    int y = 'y';
    if(input == y) 
     {
			printf("Correct\n");
		}
    else 
    {
			printf("error\n");
		}
		

}
    