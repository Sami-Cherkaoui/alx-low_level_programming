#include <stdio.h>

void fibonacci_sequence() {
int a = 1;
int b = 2;
int count = 0;

printf("%d, %d, ", a, b);
count += 2;

while (count < 98) {
int next = a + b;
printf("%d, ", next);
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

