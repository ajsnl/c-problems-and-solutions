//Write a program to print sum of first n natural number

//solution:=

#include<stdio.h> 
int main() {
  int n, sum = 0, i;
 printf("Enter a number: ");
 scanf("%d", &n); 
 for (i = 1; i <= n; i++){
 sum += i; 
 }
printf("Sum is %d \n", sum); 
 return 0;
}
