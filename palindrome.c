// problem:= Write a program to check if a given number or string is a palindrome.

//solution:= 

#include<stdio.h>
#include<string.h>
int main() {
char ch[10];
int i,len;
int flag=1;
printf("Enter the Number or String u want to check\n");
scanf("%s",ch);
len=strlen(ch);
for(i=0;i<len/2;i++){
    if(ch[i]!=ch[len-i-1]){
        flag=0;
        break;
    }
}
if(flag==1){
    printf("%s is a palindrome\n",ch);
}
else{
    printf("%s is not a palindrome\n",ch);
}

 return 0;
}
