#include <stdio.h>

void Swap(int *element1, int *element2) {
	int tmp = 0;
	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}

void Select_Sort(int arr[], int Len) {
	int i, j;
	for(i = 0; i < Len; i++) {
		int max_index = i;
		for(j = i + 1; j < Len; j++)
			if(arr[max_index] < arr[j])
				max_index = j;

		
		Swap(&arr[i], &arr[max_index]); 
	}
}

int main(void) {
	int array[10] = {12,44,29,55,20,99,30,57,87,32};
	int len = sizeof(array)/sizeof(array[0]);
	Select_Sort(array, len);
	int index;
	for(index = 0; index < len; index ++)
		printf("%d \n", array[index]);

}
