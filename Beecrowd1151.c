/*The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence.
Thereafter, each number after the first 2 is equal to the sum of the previous two numbers.
Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.*/

#include <stdio.h>

int main() {
    int N, i;
    int a = 0, b = 1, c;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        if(i == 0) {
            printf("%d", a);
        } else if(i == 1) {
            printf(" %d", b);
        } else {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }
    printf("\n");

    return 0;
}
