//Given a string, find the number of vowels and consonants in it.
#include <stdio.h>
#include <stdlib.h>
int* countvowelandconsonants(char *str)
{
	  int i,consonatecount=0,count=0;
	  int* arr = (int*)malloc(sizeof(int)*2);
	  for(i=0;str[i]!='\0';i++)
	  {
	    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='I'||str[i]=='E'||str[i]=='O'||str[i]=='U')
	    count++;
	    else if((str[i]>=65 &&str[i]<=90)||(str[i]>=97&&str[i]<=122))
	    {
	      consonatecount++;
	    }
	  }
	arr[0]=count;
	arr[1]=consonatecount;
	return arr;
}

int main() {
   int *chars;
   char *str=(char *)malloc(1000*sizeof(char));
   gets(str);

   chars=countvowelandconsonants(str);
   printf("vowels=%d \n consonants=%d",*(chars+0),*(chars+1));
   free(chars);
  return 0;
}
