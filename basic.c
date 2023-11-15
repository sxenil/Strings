#include <stdio.h>
#include <string.h>
int main (){

    //char str[]= "Damn bro, who got you smiling like that! \0";

    // PRINTING THE STRING

    // int i=0;
    // while(str[i]!='\0'){
    //     printf ("%c", str[i]);
    //     i++;
    // }

    //printf ("%s", str);

    //puts (str);  //puts is an alternative for printf statement

    //TAKING STRING INPUT

    char str[40];

    // scanf ("%s", &str);
    
    // gets(str);  //gets is an alternative statement for scanf
    // puts (str);

    scanf ("%[^\n]s", str);
    printf ("Input: %s", str);


    return 0;

}