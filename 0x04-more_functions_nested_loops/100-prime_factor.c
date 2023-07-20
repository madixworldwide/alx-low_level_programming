#include <stdio.h>
#include <math.h>

long findLargestPrimeFactor(long n) {
    long largestFactor = -1;
    long i; /* Declare i here before any executable code */

    /* Handle divisibility by 2 */
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    /* Handle divisibility by odd numbers starting from 3 */
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    /* If n is still greater than 2, then it is a prime number */
    if (n > 2)
        largestFactor = n;

    return largestFactor;
}

int main() {
    long number = 612852475143;
    long largestPrimeFactor = findLargestPrimeFactor(number);

    printf("%ld\n", largestPrimeFactor);
    return 0;
}

