#include <stdio.h>

void fibonacci_sequence() {
long int a = 1;
long int b = 2;
long int count = 0;

printf("%ld, %ld, ", a, b);
count += 2;

while (count < 98) {
long int next = a + b;
printf("%ld, ", next);
count++;

a = b;
b = next;
}

printf("\n");
}

int main() {
fibonacci_sequence();
return 0;
}

