/* Problem:
 Write a function to calculate the maximum of three numbers and call it in the main program.

Solution:=
*/
#include<stdio.h>
#include<stdlib.h>
void max();  //function declaration
int main(){
    max();  //function call
    return 0;
}
void max(){   //function definition
    int num1,num2,num3;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the third number\n");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("The Maximum number is %d",num1);
        }
        else{
            printf("The maximum number is %d",num3);
        }
    }
    else{
        if(num2>num3){
            printf("The Maximum number is %d",num2);
        }
        else{
            printf("The maximum number is %d",num3);
        }
    }
}
