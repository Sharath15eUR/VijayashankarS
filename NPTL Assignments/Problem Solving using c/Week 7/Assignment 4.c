#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
    int i=0,j=0,k=0;
    char ch;
    while(str[k]!='\0')
    {
        j=0;
        while(str[k]!='\0' && str[k]!='.' && str[k]!=' ')
        {
            substr[i][j]=str[k];
          k++;
          j++;

        }
        substr[i][j]='\0';
        i++;
        if (str[k]!='\0')
        {
            k++;
        }
    }
	int l=i,la,sm;
	la=strlen(substr[0]);
	sm=strlen(substr[0]);
	int li,si;
	for(i=0;i<l;i++)
    {
    	int a=strlen(substr[i]);
      	if(a>la)
        {
          la=a;
          li=i;
        }
      	if(a<sm)
        {
        	sm=a;
          	si=i;
        }
      
    }
	printf("Largest Word is: %s\nSmallest word is: %s",substr[li],substr[si]);
      
}	