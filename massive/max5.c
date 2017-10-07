#include <stdio.h>
#include <string.h>
 
char * longest_word(char * str, const char * delim) {
    if ( str == strtok(str, delim) ) {
        char * next = longest_word(NULL, delim);
        return ( next && strlen(next) > strlen(str) ) ? next : str;
    }
    else
        return NULL;
}
 
#define DELIM " \t\n"
 
int main(void) {
    char buf[BUFSIZ];
 
    while ( printf("String: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n' )
        printf("The first longest word: %s\n", longest_word(buf, DELIM));
       
        
    return 0;
}