#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    int h = 0;
    int len;

    printf("Enter a string: ");
    scanf("%s", a);

    len = strlen(a);

    while (h <= 3) {
        int c = 0;
        for (int i = 0; i < len; i++) {
            if (a[i] == '0' + h) {
                c++;
            }
        }
        printf("%d ", c);
        h++;
    }
    printf("\n");

    return 0;
}

