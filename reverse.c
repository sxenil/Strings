#include <stdio.h>
#include <string.h>
int main (){

    char str[40];
    puts ("Enter a string: ");
    gets (str);

    // int len= strlen (str);
    // printf ("Size: %d", len);

    puts ("\n");
    puts ("The size is: ");
    
    int size=0;
    int k= 0;
    while (str[k]!='\0'){
    size++;
    k++;
}
printf ("%d", size);
puts ("\n");

for (int i=0, j=size-1; i<=j; i++, j--){
    char temp= str[i];
    str[i]= str[j];
    str[j]= temp;
}

puts ("The reverse is: ");
puts (str);

return 0;

}