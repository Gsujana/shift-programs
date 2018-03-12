//Check if a given string is a palindrome or not

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int isPallindrome(char *str){

   int i = 0;
   int j = strlen(str) - 1;
   char temp;
 
   while (i < j) {
      if (str[i++] != str[j--])
      	return 0;
   }
   return 1;
 }

int main() {
   char *str = (char *)malloc(sizeof(char)*100);
   printf("\nEnter the string :");
   gets(str);
   if(isPallindrome(str))
   		printf("\nThe given string is a palindrome");
   else
   		printf("\nThe given string is not a palindrome");
   
   return (0);
}