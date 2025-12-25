#include<stdio.h>
#include<string.h>
int main(){
int n;
puts("Enter the order : ");
scanf("%d",&n);
char name[n][20];
puts("Enter  the names : ");
for(int i=0;i<n;i++) scanf("%s",name[i]);
for(int i=0;i<n;i++){
for(int j=0;j<=n-1-i;j++){
 if(strcmp(name[j],name[j+1])>0){
    char temp[20];
    strcpy(temp,name[j]);
    strcpy(name[j],name[j+1]);
    strcpy(name[j+1],temp);
            }
        }
    }
for(int i=0;i<n;i++) printf("%s ",name[i]);
}