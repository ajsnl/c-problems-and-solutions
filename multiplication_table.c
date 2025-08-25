// program  to print a multiplication table

//solution:=

#include<stdio.h>
int main() {
int num, i;
printf("Enter a number: \n");
scanf("%d", &num); // Fixed
for (i = 1; i <= 10; i++) {
printf("%d * %d = %d\n", num, i, num * i); 
}
return 0;
}
