#include <stdio.h>

char toUpper(char c) {return c - 'a' + 'A';}
char toLower(char c) {return c + 'a' - 'A';}

int toNumber(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return -1; 
}

int main() {
char c;
int num = 0;

while ((c = getchar()) != EOF) {
if (c >= 'a' && c <= 'z')
putchar(toUpper(c));
else if (c >= 'A' && c <= 'Z'){
putchar(toLower(c));}
else if (toNumber(c) != -1) {
num = num * 10 + toNumber(c);
}
else {putchar(c);}
if (toNumber(c) != -1){
putchar(' ');}}

    
printf("\n%d\n", num);
}
