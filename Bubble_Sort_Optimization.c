#include <stdio.h>

void Swap(int *element1, int *element2) {
	int tmp = 0;
	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}

void Bubble_Sort(int arr[], int Len) {
	int i, j, swapped = 0;
	for(i = 0; i < Len -1; i++) {
		for(j = 0; j < Len - i - 1; j++) {
			if(arr[j] > arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
		}
		
		if(!swapped)
			break;
	}
}

int main(void) {
	int data[10] = {12,1,44,55,69,23,19,4,90,28};
	int lenght = sizeof(data)/sizeof(data[0]);
	Bubble_Sort(data,lenght);

	for(lenght = 0; lenght < 10; lenght++)
		printf("%d \n",data[lenght]);
	
}
