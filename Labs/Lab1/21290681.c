#include<stdio.h>

int main(void){

int num;
scanf("%d",&num);

int counter;
counter=1;

int max_num;
int min_num;

scanf("%d",&max_num);

while (counter<num){
scanf("%d",&min_num);
counter=counter+1;
}

printf("The largest point is %d\n",max_num);
printf("The smallest point is %d\n",min_num);
printf("The difference is %d\n",max_num-min_num);
}
