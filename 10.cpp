//10.Given two strings s1 and s2, find the all the charecters common in them.
#include <stdio.h>
#include <stdlib.h>

int length(char * string){
	int i;
	for(i=0;string[i]!=0;i++);
	return i;
}

void findCommonChars(char* string1,char * string2){
	int chars1[255]={0},chars2[255]={0},i;

	for(i=0;i<length(string1);i++)
		chars1[string1[i]]++;
	for(i=0;i<length(string2);i++)
		chars2[string2[i]]++;
	
	for(i=0;i<255;i++)
		if(chars1[i]!=0&&chars2[i]!=0)
			printf("\n%c",i);
}


int main(){
	char *string1=(char *)malloc(sizeof(char)*1000);
	char *string2=(char *)malloc(sizeof(char)*1000);

	printf("Enter String1 :: ");
	scanf("%s",string1);
	printf("Enter String2 :: ");
	scanf("%s",string2);

	findCommonChars(string1,string2);
	return 0;
}

