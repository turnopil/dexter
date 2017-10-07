#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*На майбутнє: Якогось хріна якщо обявити key = argv[1] в мейні то викидує помилку >>>handles lack of argv[1])<<<
Якщо його запхати після if, то все корректно працює */


int main(int argc, string argv[])
{
    string key = "";
    
    //Check if correct of arguments given
    if (argc !=2)
    {
        printf("Usage: ./vigenere k");
        return 1;
    }
    else if (argv[1])
    {
        for (int i = 0, n = strlen(argv[1]); i < n ; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                    printf("Key must be alphabetic char only");
                    return 1;
                }
            }
    }
    
    key = argv[1];
    int keyLen = strlen(key);
    
    string text = GetString();
    int input_lenght = strlen(text);
    
    for (int i=0, j=0; i < input_lenght; i++)
     {
         //Get key for this letter
         int letterKey = tolower(key[j % keyLen]) - 'a';
         
        //Keep case of letter
        if (isupper(text[i]))
        {
            //Add key
            printf("%c", 'A' + (text[i] - 'A' + letterKey) % 26);
            j++;
        }
        else if (islower(text[i]))
        {
            printf("%c", 'a' + (text[i] - 'a' + letterKey) % 26);
            j++;
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