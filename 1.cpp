//Given a string find its length
#include <stdio.h>
#include <conio.h>

int StringLength(char *string){
	
	int i;

	for(i=0;string[i]!='\0';i++);
	return i;

}

int main(){
	
	printf("%d", StringLength("helloWorlds!!!!"));
	return 0;
}