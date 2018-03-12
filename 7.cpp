//7.Given a string s1 and an integer n, left shift it n times.
#include<stdio.h>
#include<stdlib.h>
int length(char * string){
	int i;
	for(i=0;string[i]!=0;i++);
	return i;
}
void leftShift(char * string,int n){
	int len=n%length(string),i,count=0;
	char * temp=(char *)malloc(sizeof(char)*len);
	for(i=0;i<len;i++)
	temp[i]=string[i];
	for(i=len;string[i]!=0;i++)
	string[count++]=string[i];
	for(i=0;i<len;i++)
	string[count++]=temp[i];
}
int main(){
	char *string=(char *)malloc(sizeof(char)*1000);
	int n;
	printf("Enter String :: ");
	scanf("%s",string);
	printf("Enter n :: ");
	scanf("%d",&n);
	if(n>-1)
	leftShift(string,n);
	printf("%s",string);
	return 0;
}

