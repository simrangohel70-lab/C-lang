// que 1 //
#include <stdio.h>

int main() {
    char ch='a';
    
    do
    {
        printf("%c",ch);
        ch=ch+4;
    }
    while(ch<='z');
    printf("\n");

    return 0;
}
// que 2 //

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        count++;
        num = num / 10;
    }

    printf("Total digits = %d", count);

    return 0;
}
// que 3 //
#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;   // get last digit

    while (num >= 10) {
        num = num / 10;   // reduce number to get first digit
    }

    first = num;

    printf("The sum of the first and last digit: %d", first + last);

    return 0;
}
