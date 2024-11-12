#include <stdio.h>

int main() {
    int times;
    printf("Enter the number of times to print the name: ");
    scanf("%d", &times);

    for (int i = 1; i <= times; i++) {
        printf("Jai shree Ram\n");
    }

    return 0;
}
