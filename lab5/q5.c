//WAP to display sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n!
#include<stdio.h>
int main(){
int n,factorial=1;
float sum=0;
printf("Enter the number upto which you want to find the series:\n");
scanf("%d",&n);
for(int i=1 ; i<=n; i++){
factorial=factorial*i;
sum=sum+(float)1/factorial;
}
printf("The sum of series is %f",sum);
return 0;
}


