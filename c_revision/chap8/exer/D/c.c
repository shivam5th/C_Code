/*C Program for Bubble, Selection and Insertion Sort */
#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void display(int num[], int size) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%d ",num[i]);
	}
}

void bubbleSort(int num[], int n) {
	int tmp;
	int i, j;

	for (i = 0; i < (n - 1); i++) {
		for (j = 0; j < (n - 1) - i; j++) {
			if (num[j] > num[j + 1]) {
				swap(&num[j], &num[j + 1]);
			}
		}
	}
}

void selectionSort(int num[], int n) {
        int i, j, min;
        for (i = 0; i < n - 1; i++) {
	       for (j = (i + 1); j < n; j++) {
		       if (num[i] > num[j]) {
			       swap(&num[i], &num[j]);
		       }
	       }
	}
}

void insertionSort(int num[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n; j++) {
			if (num[j] > num[j + 1]) {
				swap(&num[j], &num[j + 1]);
			}
		}
	}

}

void main() {
	int num[] = {5000, 1, 4, 82, 8, 0, -1};
	int n = sizeof(num) / sizeof(num[0]);
	
	bubbleSort(num, n);
	printf("Bubble sort is: ");
	display(num, n);
	printf("\n");
	
	selectionSort(num, n);
	printf("Selection sort is: ");
	display(num, n);

	printf("\n");
	
	insertionSort(num, n);
	printf("Insertion sort is: ");
	display(num, n);

	printf("\n");
}
