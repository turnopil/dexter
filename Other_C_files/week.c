#include "stdio.h"
#include "cs50.h"
#include "string.h"
#include <ctype.h>

int main (void)
{ 
int num;

  {
        num = GetInt();
  }
  
switch (num)
{
    case 1:
    printf("Monday");
    break;
    
    case 2:
    printf("Tusday");
    break;
    
    case 3:
    printf("Wensday");
    break;
    
    case 4:
    printf("Chetverg");
    break;
    
    case 5:
    printf("Friday");
    break;
    
    case 6:
    printf("Sybota");
    break;
    
    case 7:
    printf("Monday");
    break;
    
    default:
    printf("Enter num 7<\n");
    break;
}
}