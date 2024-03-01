// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (ch >= 65 && ch <= 90) {
//         printf("The character %c is an uppercase alphabet.\n", ch);
//     } else if (ch >= 97 && ch <= 122) {
//         printf("The character %c is a lowercase alphabet.\n", ch);
//     } else {
//         printf("The character %c is not an alphabet.\n", ch);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char a;

//     printf("Enter a character: ");
//     scanf("%c", &a);

//     if (a >= 'A' && a <= 'Z') {
//         printf("The character %c is an uppercase alphabet.\n", a);
//     } else if (a >= 'a' && a <= 'z') {
//         printf("The character %c is a lowercase alphabet.\n", a);
//     } else {
//         printf("The character %c is not an alphabet.\n", a);
//     }

//     return 0; 
// }

//  #include<stdio.h>
// int main(){
// float a,b,c;
// char op;
// printf("Enter the numbers\n");
// scanf("%f%f",&a,&b);
// printf("What type of calculations do you want to perform?[+,-,*,/]");
// scanf(" %c",&op);
// switch(op){
// case'+':c=a+b;
// printf("The sum of %.2f and %.2f is %.2f",a,b,c);
// break;
// case '-':c=a-b;
// printf("The difference of %.2f and %.2f is %.2f",a,b,c);
// break;
// case'*':c=a*b;
// printf("The product of %.2f and %.2f is %.2f",a,b,c);
// break;
// case'/': c=a/b;
// printf("The division of %.2f and %.2f is %.2f",a,b,c);
// break;
// default:printf("Invalid Input");
// }
// }

// #include<stdio.h>
// #include<math.h>
// int main() {
// float a, b, c,dis, root1,root2, real,img;
// printf("Enter the value of a b and c \n");
// scanf("%f%f%f",&a, &b, &c);
// dis = b * b -4 * a * c;
// if (dis ==0.0) {
// printf("Roots are real and equal\n");
// root1 =root2 = -b /(2.0 * a);
// printf("Root1 is = %.2f andRoot 2= %.2f",root1, root2);
// }
//  else if (dis> 0.0) {
// printf("Roots are real and unequal\n");
// root1 = (-b + sqrt(dis)) / (2.0 * a);
// root2 = (-b - sqrt(dis)) / (2.0 * a);
// printf("Root 1 is = %.2f and Root 2= %.2f", root1, root2);
// }
// else {
// printf("Roots are imaginary\n");
// real = -b / (2.0 * a);
// img = sqrt(-dis) / (2.0 * a);
// printf("Root 1 is = %.2f +%.2f i and Root 2= %.2f - %.2f i", real, img, real,
// img);
// }
// }

#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
printf("%d is a leap year.\n", year);
} else {
printf("%d is not a leap year.\n", year);
}
return 0;
}
