#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,j=0,len_1=0,len_2;
char string[200], search[10];
printf("enter the string\n");
 fgets(string, sizeof(string), stdin); //fgets(name,MAX,stdin)
printf("eneter the word u want to search ");
fgets(search, sizeof(search), stdin);
len_2= strlen(search);
while(search[i]!='\0' && string[j]!='\0'){
if(search[i]==string[j]){
    i++;j++;    }
else  {    j++;   i=0;   }
}
 if(i==len_2) {   printf("\nfound"); }
 else         {     printf("\nNot found"); }
} 


