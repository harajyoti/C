// Write a program to convert a string from upper case to lower case and vice versa in c. 

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char str[50],str1[50];
	printf("Enter a string:");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str1[i]=str[i]+32;
		}
		
		else if(str[i]>=97 && str[i]<=122)
		{
			str1[i]=str[i]-32;
		}
		
		else
		{
			str1[i]=str[i];
		}
	}
	
	str1[i]='\0';
	
	printf("String in upper case: %s",str1);
	
	return 0;
}