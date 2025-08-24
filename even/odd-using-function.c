/* Problem: Write a program with a function to check if a number is even or odd
solution:=
*/
#include<stdio.h>
#include<stdlib.h>
void check(int);
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    check(num);
    return EXIT_SUCCESS;
}
 void check(int x){
     if(x%2==0){
         printf(" %d is an Even number\n");
     }
     else{
         printf("%d is an Odd number\n");
     }
 }