// 1. Write a recursive function to calculate sum of first N natural numbers

// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int x,a;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     a = sum(x);
//     printf("%d",a);
//     return 0;
// }
// int sum(int n)
// {
//     int s;
//     if (n!=0)
//     {
//         s = n + sum(n-1);
//         return s;
//     }
    
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers

// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int x,a;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     a = sum(x);
//     printf("%d",a);
//     return 0;
// }
// int sum(int n)
// {
//     int s;
//     if (n!=0)
//     {
//         s = (2*n-1) + sum(n-1);
//         return s;
//     }
    
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers

// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int x,a;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     a = sum(x);
//     printf("%d",a);
//     return 0;
// }
// int sum(int n)
// {
//     int s;
//     if (n!=0)
//     {
//         s = (n*n) + sum(n-1);
//         return s;   
//     }
    
// }

// 5. Write a recursive function to calculate sum of digits of a given number

// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int x,a;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     a = sum(x);
//     printf("%d",a);
//     return 0;
// }
// int sum(int n)
// {
//     int s;
//     if(n!=0)
//     {
//         s = (n%10) + sum(n/10);
//         return s;
//     }

// }

// 6. Write a recursive function to calculate factorial of a given number

// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int x,a;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     a = fact(x);
//     printf("The factorial of a given number is %d",a);
//     return 0;
// }
// int fact(int n)
// {
//     int s = 1;
//     if (n>1)
//     {
//         n = (n * fact(n-1));
//         return n;
//     }
    
// }

// 7. Write a recursive function to calculate HCF of two numbers

// #include<stdio.h>
// int hcf(int,int);
// int main()
// {
//     int x,y,cal;
//     printf("Enter two number: ");
//     scanf("%d %d",&x,&y);
//     cal = hcf(x,y);
//     printf("%d",cal);
//     return 0;
// }
// int hcf(int a,int b)
// {
//     int c;
//     if (b!=0)
//     {
//         c = hcf( b , a % b );
//         return c;
//     }
//     else
//     {
//         return a;
//     }
    
// }

// 8. Write a recursive function to print first N terms of Fibonacci series

// #include<stdio.h>
// void fibonacci(int);
// int main()
// {
//     int x,f1 = 0,f2 = 1;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d %d",f1,f2);
//     fibonacci(x-2);
//     return 0;
// }
// void fibonacci(int n)
// {
//    static int nt,f1 = 0,f2 = 1;
//     if (n!=0)
//     {
//         nt= f1 + f2;
//         f1 = f2;
//         f2 = nt;
//         printf(" %d",nt);
//         fibonacci(n-1);
//     }
    
// }

// 9. Write a program in C to count the digits of a given number using recursion.

// #include<stdio.h>
// int count(int);
// int main()
// {
//     int x,c;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     c = count(x);
//     printf("%d",c);
//     return 0;
// }
// int count(int n)
// {
//     static int s = 0;
//     if(n!=0)
//     {
//         s++;
//         count(n/10);
//     }
//     return s;   
// }

// 10. Write a program in C to calculate the power of any number using recursion.

// #include<stdio.h>
// int cal(int,int);
// int main()
// {
//     int x,y,c;
//     printf("Enter the number: ");
//     scanf("%d",&x);
//     printf("Enter the power of number: ");
//     scanf("%d",&y);
//     c = cal(x,y);
//     printf("power of number %d^%d is %d",x,y,c);
//     return 0;
// }
// int cal(int a, int b)
// {
//     static int s = 0,n;
//     if (b!=0)
//     {
//         s++;
//         cal(a,b-1);
//     }
//     return s;
// }