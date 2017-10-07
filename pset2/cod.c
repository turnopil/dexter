#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int n = 0;
    int input_length = 0;
    string text = "";
    
    //Check if correct of arguments given
    if (argc !=2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    else 
    {
        //Convert input to int type
        n = atoi(argv[1]);
    }
    
    text = GetString();
    input_length = strlen(text);
    
    for (int i=0; i < input_length; i++)
     {
        //Keep case of letter
        if (isupper(text[i]))
        {
            //Add key
            printf("%c", 'A' + (text[i] - 'A' + n) % 26);
        }
        else if (islower(text[i]))
        {
            printf("%c", 'a' + (text[i] - 'a' + n) % 26);
        }
        else 
        {
            //Return unchanged 
            printf("%c", text[i]);
        }
     }
     
     printf("\n");
     return 0;
}