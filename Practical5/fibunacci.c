#include <stdio.h> // header file

void fibnacci(int *px, int *py);

int main(void) {
        // Ask the user for a value n, then create a
        // fibunacci series up to n

        int n;

        printf("Enter the value on n: ");
	scanf("%d", &n);

	// Checking whether the input is an positive integer
	if (n < 1) {
		printf("n must be greater than 1\n");
		return(1);
	}


	// Have two arguments f0 and f1, use a function to swap their positions
        int f0 = 0, f1 =1;
        printf("The fibunacci series is:\n %d %d ", f0, f1);

	int i;
	for (i=2; i <= n; i++) {
		fibnacci(&f1, &f0);
		printf("%d ", f1);
		if ((i + 1) % 10 == 0 || i == n) {
			printf("\n");
		}
	}

	return 0;
}
// this function computes the fibunacci sequence
void fibnacci(int *px, int *py) {
	int pz;
	pz = *px + *py;
	*py = *px;
	*px = pz;
}
