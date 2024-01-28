#include <stdio.h>

int main(void){

int inp,fib3;
int fib1=0;
int fib2=1;

scanf("%d",&inp);

if (inp==0){
printf("%s","Error\n");
}
else{
if (inp==1){
printf("%s","* 0\n1. element is 0\n");
}
else{

for (int counter=1; counter<=inp;counter++){
for (int time=1; time<=counter;time++){
printf("* ");
}

printf("%d\n",fib1);

fib3=fib1+fib2;
fib1=fib2;
fib2=fib3;

}
printf("%d. element is %d\n",inp,fib2-fib1);


}
}
}
