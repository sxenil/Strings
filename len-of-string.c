#include <stdio.h>
#include <string.h>
int main (){

    char str[40];
    puts ("Enter a string: ");
    gets (str);
    int len= strlen (str);
    printf ("Size: %d", len);

    return 0;
    
}