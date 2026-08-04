#include <stdio.h>

int main() {
	int a[100], n, pos, i;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("Enter the position to delete (1 to %d): ", n);
	scanf("%d", &pos);

	if (pos < 1 || pos > n) {
		printf("Invalid position\n");
		return 0;
	}

	for (i = pos - 1; i < n - 1; i++) {
		a[i] = a[i + 1];
	}

	n--;

	printf("Array after deletion: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	return 0;
}
