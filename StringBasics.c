// Basically string ko ham ek character array keh skte //

#include<stdio.h>
int main(){ 

// char a[5]={'H','a','r','s','h'};   -> old way of initialising a char array
//new way :
char arr[]="Hello Ji Hello "; // maze ki baat to ye hai ki agar \0 nahi bhi dalta hu input me tab bhi code smoothly run krega hehe kyuki computer khud se inke last me \0 laga dega :)//


// for(int i=0;i<5;i++)(
//     printf("%c ",a[i]);
// )     // abhi tk ke gyaan se ham koi bhi sentence chahe toh aese store ya print kra skte hai array ke through but this shit is really old and ugly so that's why we had to study STRINGS :)//


// char ch='\0'; // null character  // iska ASCII value 0 hota hai
// printf("%d ",ch); 
int i=0;
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
// ab ye method to thik hai but isme count krna pad rha ek ek char then loop me condition deni pad rhi thats why we need to use \0 //


    return 0;
}