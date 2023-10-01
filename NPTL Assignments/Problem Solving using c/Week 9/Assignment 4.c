#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int t,e;
e=n-1;
for(int i=0;i<n/2;i++)
{
	t=array[i];
  	array[i]=array[e];
  	array[e]=t;
  	e--;
}
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}