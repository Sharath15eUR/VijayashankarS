#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
		int l=strlen(str1);
		reverse(str1,0,l-1);
		printf("The string after reversing is: %s",str1);
	}

void reverse(char str[],int s,int e)
{
	for(;s<e;s++,e--)
    {
    	char temp=str[s];
      	str[s]=str[e];
      	str[e]=temp;
    }
}