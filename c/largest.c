#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Print the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
