#include <stdio.h>
#include <stdlib.h>

#define n 5

int main(void)
{
	int(*a)[n] = calloc(n * n, sizeof(int));
    for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) a[i][j] = i * n + j;
	}
    for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) printf("%2d ", a[i][j]);
		putchar('\n');
	}
    free(a);
    return 0;
}