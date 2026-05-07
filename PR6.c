que 1 //

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    int isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

       while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    return 0;
}

que 2 //

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Frequency of each character:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}
