#include<stdio.h>
 #include<string.h>
int main(){
char str[20]; printf("Enter the string : "); gets(str);
char temp[20]; 
printf("\n");
strcpy(temp,str);
strrev(temp);
if(strcmp(str,temp)==0) printf("Palindrome !!");
else printf("Not Palindrome :/");
return 0;
}