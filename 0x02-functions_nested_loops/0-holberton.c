#include "holberton.h"

/**
 * main entry point
 * Description:Prints Holberton with _putchar
 * retrun 0 for success
 */
int main(void){
   int i=0;
   char c;
   char s[]="Holberton\n";
   while (i<=9)
   {
       c=s[i];
       _putchar(c);
       i++;
   }
   
    return(0);
}