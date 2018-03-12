//Reverse a given string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char *ReverseString(char *str){

   int i = 0;
   int j = strlen(str) - 1;
   char temp;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   return str;
 }

int main() {
   char *str = (char *)malloc(sizeof(char)*100);
   printf("\nEnter the string :");
   gets(str);
   str = ReverseString(str);
   printf("\nReverse string is :%s", str);
   return (0);
}