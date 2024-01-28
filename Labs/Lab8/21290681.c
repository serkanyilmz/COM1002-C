#include<stdio.h>
//!!! do not use any other libraries !!!

int pointer(int *arr, int size, int *p1, int *p2){
	//arr is already sorted
	int min,max;

	max=arr[0];
	min=arr[size-1];
	
	*p1=min;//min
	*p2=max;//max

	return 0;
}

void sortTheArray(int *arr, int size) {
	int temp;
    	for (int i = 0; i < size-1; i++) {
        	for (int j = i+1; j < size; j++) {
            		if (arr[j] < arr[i]) {
                		temp = arr[i];
                		arr[i] = arr[j];
                		arr[j] = temp;
            		}
        	}
    	}
}



int main(){
	int p1, p2;			//!!!!! Do not change this line !!!!!!!

	int size;
	scanf("%d", &size);
	int arr[size];
	for (int i=0; i<size; i++){
		scanf("%d",&arr[i]);

	}
	printf("Original Array= ");
	for (int i=0; i<size; i++){
		printf("%d ",arr[i]);

	}
	printf("\n");
	sortTheArray(arr,size);
	pointer(arr,size,&p1,&p2);

	printf("*p1= %d\n",p1);		//!!!!! Do not change this line !!!!!!!
	printf("*p2= %d\n",p2);		//!!!!! Do not change this line !!!!!!!

	printf("Sorted Array= ");
	for (int i=0; i<size; i++){
		printf("%d ",arr[i]);

	}
	printf("\n");
	


}
