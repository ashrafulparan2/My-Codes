// Program to print first n numbers that are k-primes
#include<stdio.h>

// A function to count all prime factors of a given number
int countPrimeFactors(int n)
{
    int count = 0;

    // Count the number of 2s that divide n
    while (n%2 == 0)
    {
        n = n/2;
        count++;
    }

    // n must be odd at this point. So we can skip one
    // element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, count i and divide n
        while (n%i == 0)
        {
            n = n/i;
            count++;
        }
    }

    // This condition is to handle the case whien n is a
    // prime number greater than 2
    if (n > 2)
        count++;

    return(count);
}

// A function to print the first n numbers that are
// k-almost primes.
void printKAlmostPrimes(int k, int n)
{
    for (int i=1, num=2; i<=n; num++)
    {
        // Print this number if it is k-prime
        if (countPrimeFactors(num) == k)
        {
            printf("%d ", num);

            // Increment count of k-primes printed
            // so far
            i++;
        }
    }
    return;
}

/* Driver program to test above function */
int main()
{
    int n = 10, k = 2;
    printf("First %d %d-almost prime numbers : \n",
           n, k);
    printKAlmostPrimes(k, n);
    return 0;
}
