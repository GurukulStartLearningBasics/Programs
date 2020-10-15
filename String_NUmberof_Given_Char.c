#include <stdio.h>
#include <string.h>
int main()
{
    int len, i=0,count=0;
char name[40], c;
printf("enter the string\n");
 fgets(name, sizeof(name), stdin); //fgets(name,MAX,stdin)
len= strlen(name);
printf("eneter the character ");
scanf("%c",&c);
for(i=0;i!=(strlen(name));i++)
{
    
    if(c==name[i])
    {
        
        count++;
    }
 }
 printf("%d",count);
}