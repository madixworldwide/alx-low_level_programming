#include <stdio.h>

void add_strings(char *num1, char *num2, char *result);
void copy_string(char *source, char *destination);

int main() {
    char fib1[200] = "1"; // First Fibonacci number
    char fib2[200] = "2"; // Second Fibonacci number
    char next_fib[200]; // Variable to store the next Fibonacci number
    int count;

    printf("%s, %s", fib1, fib2); // Print the first two Fibonacci numbers

    for (count = 3; count <= 98; count++) {
        add_strings(fib1, fib2, next_fib); // Calculate the next Fibonacci number
        printf(", %s", next_fib); // Print the next Fibonacci number

        // Move fib2 to fib1 and next_fib to fib2 for the next iteration
        copy_string(fib2, fib1);
        copy_string(next_fib, fib2);
    }

    printf("\n");

    return 0;
}

// Function to add two large numbers represented as strings
void add_strings(char *num1, char *num2, char *result) {
    int carry = 0;
    int i, j, k;

    for (i = 0, j = 0; num1[i] != '\0' || num2[j] != '\0'; i++, j++) {
        int digit1 = (num1[i] != '\0') ? (num1[i] - '0') : 0;
        int digit2 = (num2[j] != '\0') ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[i] = (sum % 10) + '0';
    }

    if (carry > 0) {
        result[i] = carry + '0';
        i++;
    }

    result[i] = '\0';
}

// Function to copy one string to another
void copy_string(char *source, char *destination) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

