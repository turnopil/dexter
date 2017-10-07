#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
     {  
      return ( *(int*)a - *(int*)b );
     }
int main (void)
{
  int mass[15];
  int i;

  for(i=0; i<15; i++)
   {
     printf("enter array value %i\n",i);
     //mass[i] = rand();//хуячим рандом
     mass[i] = GetInt();
   }
 
  int n;  
  qsort (mass, 15, sizeof(int), compare);  
  for (n=0; n<15; n++)     
    printf ("%d ",mass[n]);  
  
   return 0;
  }



