//8.Given a string s2 and an integer n, repeat the string s1, n times.
//Eg: s1= ‘mrnd’ n=3; output = ‘mrndmrndmrnd’
#include<stdio.h>
#include<stdlib.h>
int length(char * string){
	int i;
	for(i=0;string[i]!=0;i++);
	return i;
}
char * repeatString(char * string,int n){
	char * repeatedString=(char *)malloc(sizeof(char)*length(string)*n);
	int i,j,count=0;
	for(i=0;i<n;i++)
	for(j=0;j<length(string);j++)
	repeatedString[count++]=string[j];
	repeatedString[count++]='\0';
	return repeatedString;
}
int main(){
	char *string=(char *)malloc(sizeof(char)*1000);
	int n;
	printf("Enter String :: ");
	scanf("%s",string);
	printf("Enter n :: ");
	scanf("%d",&n);
	if(n>-1)
	string=repeatString(string,n);
	printf("%s",string);
	return 0;
}

