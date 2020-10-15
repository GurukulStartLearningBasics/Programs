#include <stdio.h>
#include <string.h>
int main()
{
    int len, i=0;
char name[20];
printf("enter the string\n");
 fgets(name, sizeof(name), stdin); //fgets(name,MAX,stdin)
len= strlen(name);
//printf("%d",len);
for(i=strlen(name);i>=0;i--)
{
    
     printf("%c",name[i]);
 }
}
