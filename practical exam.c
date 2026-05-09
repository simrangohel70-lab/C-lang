#include <stdio.h>
// que 1

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel", ch);
            break;

        default:
            printf("Consonant", ch);
    }

    return 0;
}

// que 2

#include <stdio.h>

int main() {
    int arr[100], n, i, largest;

    printf("Enter the array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}

// que 3

#include <stdio.h>

int revNum(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    int revnum = revNum(num);

    printf("Reverse number: %d\n", revnum);

    return 0;
}

// que 4

#include <stdio.h>

int main()
{
    int arr[5], i;
    int *ptr;

    printf("Enter 5 elements:");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Square of elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", (*ptr) * (*ptr));
        ptr++;
    }

    return 0;
}

// que 5

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i * i);
        }

        printf("\n");
    }

    return 0;
}

