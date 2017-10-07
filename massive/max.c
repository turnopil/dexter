#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
   char str[100];
   //curlen - текущая длина слова
   //maxlen - максимальная длина слова
   //index - индекс, соответствующий позиции
   //конца самого длинного слова +1
int curlen = 0, maxlen = 0, index = 0, i;
//char b = '\0';

do
{
 for(i=0;i<100;i++)
  printf(" Input line: ");
    str[i] = GetChar();

   {
     if(str[i]==' '|| str[i]=='\0')
     {
         if(curlen>maxlen)
         {
           maxlen = curlen;
             index = i;
         }
         //если конец строки -> выйти из цикла
         curlen = 0;
         //if(str[i]==b)
         //break;
     }
     else curlen++;
   }
}
  while (str[i] != '\0');

{ printf("%d", maxlen);
      return 0;
}
}