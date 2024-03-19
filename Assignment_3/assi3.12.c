/*Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512
index: 5
index: 3*/


#include <stdio.h>

// Function to calculate power using shorthand multiplication
int calculate_power(int base, int index) {
    int result = 1;
    for (int i = 0; i < index; ++i) {
        result *= base; // shorthand multiplication
    }
    return result;
}

int main() {
    int base, index;
    printf("Enter the base (an integer): ");
    scanf("%d", &base);
    printf("Enter the index (an integer): ");
    scanf("%d", &index);

    int power = calculate_power(base, index);

    printf("%d raised to the power of %d is equal to %d\n", base, index, power);


    return 0;
}
