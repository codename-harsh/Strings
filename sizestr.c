#include<stdio.h> #include<string.h>
int main(){
    char str[32];
puts("Enter the array :");
gets(str);
int k=0,size=0;
while(str[k]!='\0'){
size++; k++;
}
printf("The size of the given string is : %d ",size);
}