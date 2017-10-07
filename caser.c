#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
                        
int main(int argc, string argv[])
{

    int n = 0;
    int input_length = 0;
    string text = "";

    if (argc !=2)
    {
        return 1;
    }
    else
    {
         n = atoi(argv[1]);
    }  
    
    
    text = GetString();
    input_length = strlen(text);
    
    for(int i = 0; i < input_length; i++)
 
    {
    if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (text[i]-'A' + n) %26 + 'A';
            //if (text[i] > 'Z') text[i] = 'A' + (text[i] - 'Z') - 1;
            printf ("%s", text);
            return 1;
        }
    if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (text[i]-'a' + n) %26 + 'a';
            //if (text[i] > 'z')  text[i]= 'a' + (text[i] - 'z') - 1;
            printf ("%s", text);
            return 1;
        }
    }
    /*else
        {
            printf("%s", text);
        }*/
    }
      
 

 
    
