#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include <ctype.h>

//const char* fyn(const char *s);

int main(void)
{ 
    const char *res; //указатель на максимальное слово
    const char *beg; //начало текущего слова
    int maxLen = 0;
    int curLen = 0;
    int s;
    
    for(res = s, beg = s; ; ++s)
    { 
         if ( (*s == ' ') || (*s == '\0') ) 
         { 
            if (curLen > maxLen) 
            {
                maxLen = curLen; 
                res = beg; 
            }
            curLen = 0;
            beg = s + 1;
            if ( *s == '\0')
                break;
        } else 
        { 
            ++curLen; 
        }
        printf("%.*s\n", maxLen, res);
    } 
    
    return res; 
}