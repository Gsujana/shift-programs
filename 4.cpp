//10.Given two strings s1 and s2, find the all the charecters common in them.
#include <stdio.h>
#include <stdlib.h>

int length(char * string){
	int i;
	for(i=0;string[i]!=0;i++);
	return i;
}

int checkSubstring(char* string1,char * string2){
	
	int flag = 1;
	for(int i=0; i<length(string1); i++){
		if(string2[0] == string1[i]){
			int k = i+1;
			for(int j=1; j<length(string2); j++){
				if(string2[j] != string1[k++]){
					flag = 0;
					break;
				}
			}
			if(flag == 1){
				return 1;
			}
			else{
				flag = 1;
			}

		}
		
	}
	return 0;
}


int main(){
	char *string1=(char *)malloc(sizeof(char)*1000);
	char *string2=(char *)malloc(sizeof(char)*1000);

	printf("Enter String1 :: ");
	gets(string1);
	printf("Enter String2 :: ");
	gets(string2);

	if(checkSubstring(string1,string2))
		printf(" %s is a substring of %s ", string2, string1);
	else
		printf(" %s is not a substring of %s", string2, string1);
	return 0;
}

