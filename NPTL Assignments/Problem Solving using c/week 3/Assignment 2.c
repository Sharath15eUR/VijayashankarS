#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 


if(number<=0.0)
{	if(number==0.0)
		printf("The number is 0.");

 else
	printf("Negative number.");

 }

else
{
	printf("Positive number.");
}
}