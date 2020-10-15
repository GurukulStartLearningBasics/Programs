#include <stdio.h>
int main() {
    char s[] = "Hello friend";
    int i;

    for (i = 0; s[i] != '\0'; i++);
    printf("\nLength of the string: %d", i);

    return 0;
}