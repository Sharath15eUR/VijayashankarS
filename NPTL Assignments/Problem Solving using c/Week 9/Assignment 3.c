#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
	int s,e,m;
	s=0;
	e=n-1;
	m=(s+e)/2;
	while(s<=e)
    {
    	if(array[m]<search)
          s=m+1;
      	else if(array[m]==search)
        {
        	printf("%d found at location %d.", search, m+1);
          	break;
        }
      
      	else
          e=m-1;
    	m=(s+e)/2;
    }
if(s>e)
   printf("Not found! %d isn't present in the list.", search);
}