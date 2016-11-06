#include <stdio.h>

void Swap(int *element1, int *element2) {
	int tmp = 0;
	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}

void Bubble_Sort (int arr[], int len) {
	int i, j ;
	for(i = 0; i < len -1; i++)
		for(j = 0; j < len - i - 1; j++) {
			if(arr[j] > arr[j + 1])
				Swap(&arr[j], &arr[j + 1]);
		}
}

int main(void) {
	int data[] = {12,1,44,55,69,23,19,4,90,28};
	int x = sizeof(data)/sizeof(*data);
	int index;	
	Bubble_Sort(data, x);

	for(index = 0; index < x; index++)
		printf("%d \n", data[index]);
}

