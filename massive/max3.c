#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
 
int main(void){
    
    char s[255];
    char buf[255];
    char max[255];
    char min[255];
    int i, k, n, max_length, min_length;
    
    i = 0;
    max_length = 0;
    min_length = 256;
    n = 0;
    
    s[i]=GetChar();
    
    while(s[i] != '\0'){        
        if (s[i] != ' ' && s[i] != '.'){
            buf[n] = s[i];
            ++n;
        }else{
            if (n > max_length){
                for (k = 0; k < n; ++k)
                    max[k] = buf[k];
                max_length = n;
            }
            if (n < min_length && n > 0){
                for (k = 0; k < n; ++k)
                    min[k] = buf[k];
                min_length = n;
            }
            n = 0;
        }
        ++i;        
    }
    
    min[min_length] = '\0';
    max[max_length] = '\0'; 
        
    printf("max = %s, max_length = %d\n", max, max_length);
    printf("min = %s, min_length = %d\n", min, min_length);
    
    return 0;   
}