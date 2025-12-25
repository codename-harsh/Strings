#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10];
    int i, j, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);   
    j = strlen(str) - 1; 
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}