#include "main.h"
#include <stdio.h>

/**
 * time_table - print the 0 time table, starting with 0
 * Return: empty output
*/

void times_table(void) {
int x = 9;
int y;
int z;

for (int i = 0; i <= 10; i++) {
y = i;
z = x * y;
printf("%d x %d = %d\n", x, y, z);
}
}
