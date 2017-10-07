#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include <ctype.h>

int main (int argc, string argv[])
{
   char str[100];
   int curlen = 0, maxlen = 0, index = 0, i;



	string input = "";
	int input_length = 0;
	
	input = GetString();
	input_length = strlen(input);



 for(i = 0; i < input_length; ++i)
    {
     if(str[i]==' '|| str[i]=='\0')
     {
         if(curlen>maxlen)
         {
           maxlen = curlen;
             index = i;
         }
         
         if(str[i]=='\0')
         break;
         curlen = 0;
      }
      else curlen++;
   }
printf("%d", maxlen);
   return 0;
}