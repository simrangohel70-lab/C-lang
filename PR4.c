// que 1

#include <stdio.h>

int main() {
    int i, j;

    for(i = 41; i <= 45; i++) {
        for(j = 41; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

// que 2

#include <stdio.h>

int main() {
    int i, j, num = 11;

    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

// que 3

#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
// que 4

#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            if(j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

// que 5

#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j < i; j++) {
            printf("  ");
        }
        for(j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        for(k = 4; k >= i; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}

// que 6

#include <stdio.h>

int main() {
    int  i,j;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = 1; j <= (5 - i) * 2; j++) {
            printf("  "); 
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// que 7

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {

            if(i == 1 || i == 3 || j == 1 || (i == 2 && j == 5))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
