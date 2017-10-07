#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (void)
{
int compare;
int mass[10];
int i;
//* int min = 0;
 
 for(i=0; i<10; i++)
   {
       printf("enter array %i\n",i);
       mass[i] = GetInt();
   }
int compare (const void * a, const void * b)

  {  
   return ( *(int*)a - *(int*)b );
  {  
  int n;  
  qsort (mass, 10, sizeof(int), compare);  
  for (n=0; n<10; n++)     
    printf ("%d ",mass[n]);  
  return 0;
}
}
}