#include <stdio.h>

#define MAX_DIGITS 500

void initialize_array(int array[], int value, int length) {
for (int i = 0; i < length; i++) {
array[i] = value;
}
}

void add_arrays(int result[], int array1[], int array2[], int length) {
int carry = 0;
for (int i = 0; i < length; i++) {
int sum = array1[i] + array2[i] + carry;
result[i] = sum % 10;
carry = sum / 10;
}
}

void copy_array(int dest[], int src[], int length) {
for (int i = 0; i < length; i++) {
dest[i] = src[i];
}
}

void print_fibonacci_sequence() {
int a[MAX_DIGITS];
int b[MAX_DIGITS];
int result[MAX_DIGITS];

initialize_array(a, 0, MAX_DIGITS);
initialize_array(b, 0, MAX_DIGITS);
initialize_array(result, 0, MAX_DIGITS);

a[MAX_DIGITS - 1] = 1;
b[MAX_DIGITS - 1] = 2;

printf("%d, %d, ", a[MAX_DIGITS - 1], b[MAX_DIGITS - 1]);

for (int i = 2; i < 98; i++) {
add_arrays(result, a, b, MAX_DIGITS);
copy_array(a, b, MAX_DIGITS);
copy_array(b, result, MAX_DIGITS);

int j = 0;
while (result[j] == 0) {
j++;
}

for (; j < MAX_DIGITS; j++) {
printf("%d", result[j]);
}
printf(", ");
}

printf("\n");
}

int main() {
print_fibonacci_sequence();
return 0;
}

