#include "stdio.h"
#include "cs50.h"
#include "string.h"
#include <ctype.h>

int main (int argc, string argv[])
{
	string input = "";
	int n = 0;
	
	input = GetString();
	n = strlen(input);
	
	printf("%c", toupper(input[0]));
	
	for(int i = 0; i < n; ++i)
	{
		 // Get Letter after space
        while (input[i] == ' ')
        {
            i++;

            // Only print if next char is not a space
            if (i < n && input[i] != ' ')
            {
                printf("%c", toupper(input[i]));
            }
        }   
	
	}
	printf("\n");
}