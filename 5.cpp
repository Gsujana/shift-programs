// Replace the substrings in a string with the given string

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int length(char * string){
	int i;
	for(i=0;string[i]!=0;i++);
	return i;
}

char * replace_words(char *str1, char *str2, char *str3){

	char *output=(char *)malloc(sizeof(char)*1000);
	int flag = 0, index = 0;
	for(int i=0; i <length(str1); i++){
		if(str2[0] == str1[i]){
			int k = i+1;
			for(int j=1; j<length(str2); j++){
				if(str2[j] != str1[k++]){
					flag = 1;
					break;
				}
			}
			if(flag == 1){
				output[index++] = str1[i];
				flag = 0;
				continue;
			}
			else{
				for(int j = 0; j< length(str3); j++)
					output[index++] = str3[j];
				flag = 0;
				i = i+length(str2)-1;
			}
		}
		else{
			output[index++] = str1[i];
		}	
		
	}
	return output;
}

int main(){

	printf("%s", replace_words("hey hi hi hi hey hey", "hi", "hello"));
	return 0;
}