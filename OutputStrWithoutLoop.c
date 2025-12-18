#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%s",str);  -> but isse ham bas first word hi input le skte he baki first space lgane k bad ka kuch bhi nai le skte// thats why we use gets() hehe//
    
    gets(str); //-> entire sentence can be taken input // also gets ki jagah ek aur method hai thoda ganda hai but hai ..
    // scanf("%[^\n]s",str) ;  //->thoda tough hai but hai so remeber for OLTs
    
    printf("YOur input was : %s",str);

    // puts(str);  // upar wale printf wala kaam krega //



}