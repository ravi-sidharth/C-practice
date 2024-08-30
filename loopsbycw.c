// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//         printf("I Love You\n");
// }

// question : print hello world 'n' times. take 'n' as input from user

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("\nhello world");
//     }

//  return 0;
// }

// question: print numbers from 1 to 100

// #include<stdio.h>
// int main ()
// {
//     for(int i=1; i<=100; i++)
//     {
//     printf("%d\n",i);
//     }

//     return 0;
// }

// question : Print all the even numbers from 1 to 100

// #include<stdio.h>
// int main()
// {
//     for (int i=1; i<=100; i++){
//         if (i%2==0)
//         {
//             printf("%d\n",i);
//         }
//     }

//     return 0;
// }

// question : Print all the odd numbers from 1 to 100

// #include<stdio.h>
// int main()
// {
//     for (int i=1; i<=100; i++){
//         if (i%2!=0)
//         {
//             printf("%d\n",i);
//         }
//     }

//     return 0;
// }

// Print the table of 'n' . Here 'n' is a integer which user will input.

// #include <stdio.h>
// int main()
// {
//     for (int i = 19; i <= 190; i=i+19)
//     {

//         printf("%d\n", i);
//     }

//     return 0;
// }

// Question : Display this AP -1,3,5,7,9,..upto 'n' terms.

// #include<stdio.h>
// int main ()
// { int n;
// printf("enter the value of n:-");
// scanf("%d",&n);
//     for (int i=1;i<=2*n-1;i=i+2)
//     {
//         printf("%d\n",i);
//     }

//     return 0;
// }

// Question this AP - 4,7,10,13,16..upto 'n' terms.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     for (int i=4; i<=3*n+1; i=i+3)
//     {
//         printf("%d ",i);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//      int a=4;
//     for (int i=1; i<=n; i++)
//     {
//         printf("%d ",a);
//         a=a+3;
//     }
//     return 0;
// }

// Question this GP- 1,2,4,8,16,32,..upto 'n' terms.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//      int a=1;
//      for (int i=1; i<=n; i++)
//      {
//         printf("%d ",a);
//         a=a*2;
//      }
//      return 0;

// }

// Question this GP- 3,12,48,,...upto 'n' terms.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int a=3;
//     for (int i=1; i<=n; i++)
//     {
//         printf("%d ",a);
//         a=4*a;
//     }
//     return 0;
// }

// Question this AP -100,97,94,..upto all terms which are positive.

// #include<stdio.h>
// int main()
// {
//     int a=100;

//     for(int i=1; a>0; i++)
//         {
//             printf("%d ",a);
//             a=a-3;
//         }

//     return 0;
// }

// HW: Display this GP -100,50,25...,upto 'n' terms.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//    float a=100;

//     for (int i=1; i<=n; i++)
//     {
//         printf("%f ",a);
//         a=a/2;
//     }

//     return 0;
// }

/// Quetion : WAP to check if a number is prime or not.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d", &n);
//     int count=0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             count+=1;
//             break;
//         }
//     }
//         if (count == 0)
//         {
//                 printf("its prime number");
//             }
//             else { printf("its not prime number");}

//     return 0;
// }

// Question : WAP to print odd numbers from 1 to 100.

// #include<stdio.h>
// int main ()
// {
//     for (int i=1; i<=100; i++)
//     {
//         if(i%2==0)
//         {
//         continue;
//         }

//     printf("%d ",i);

//     }

//     return 0;

// }

// Question : write a program to print all the even number 1 to 100 with using continue statement

// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=100; i++)
//     {
//         if (i%2!=0)
//         {

//         continue;
//         }
//          printf("%d ",i);
//     }
//       return 0;
// }

// Question : Write a program to count digits of a given number.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n :-");
//     scanf("%d",&n);

//     int count=0;

//     while(n!=0)
//     {
//     n=n/10;
//     count=count+1;
//     }

//     printf("the number of digits are %d",count);
//     return 0;

// }

// Qestion : write a program to print sum of a given number.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int sum=0;
//     int a;

//     while(n!=0)
//     {
//         a=n%10;
//         sum=sum+a;
//         n=n/10;
//     }
//     printf("enter the sum of digit:-%d",sum);

//     return 0;
// }

// HW : write a program to print sum of all the even digits of a given number.
// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int sum=0;
//     int a;

//     while (n!=0)
//     {
//         a=n%10;

//         if (a%2==0)
//         {
//             sum =sum+a;
//               n=n/10;
//         }

//          else { n=n/10;}

//     }

//     printf("sum of even digit number:-%d",sum);

//     return 0;
// }

// HW write a program to print sum of odd number.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d", &n);

//     int sum = 0;
//     int a;

//     while (n != 0)
//     {
//         a = n % 10;

//         if (a % 2 != 0)
//         {
//             sum = sum + a;
//             n = n / 10;
//         }
//         else
//         {
//             n = n / 10;
//         }
//     }

//     printf("sum of odd digit number%d",sum);

//     return 0;
// }

// Question : write a program to print reserve of a given number.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d", &n);

//     int reserve_number= 0;
//     int last_digit;

//     while (n != 0)
//     {
//         last_digit = n % 10;
//         reserve_number= reserve_number* 10 + last_digit;
//         n = n / 10;
//     }

//     printf("reserve number:-%d",reserve_number);

//     return 0;
// }

// HW: write a program to print the sum of given number and its reserve;

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int reserve_number=0,sum=0, last_digit;

//     while(n!=0)
//     {
//         last_digit=n%10;
//         sum=sum+last_digit;
//         reserve_number=reserve_number*10+last_digit;
//         n=n/10;
//     }
//     printf("sum:-%d\n reserve number:-%d", sum,reserve_number);

// }

// Question: print the sum of this series:
// 1+2+3+4+5+6...upto 'n'.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d", &n);

//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//            sum=sum+i;
//     }

//     printf("the sum is:%d",sum);

//     return 0;
// }

// Question: print the sum of this series:
// 1-2+3-4+5-6...upto 'n'.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int sum1=0,sum2=0;
//     for(int i=1; i<=n; i++)

//     {
//         if (i%2!=0)
//         {
//             sum1=sum1+i;
//         }

//     else
//     {
//         sum2=sum2+i;// sum2=sum2-i
//     }

//     }

//     printf("sum of the series:-%d",sum1-sum2);// sum1+sum2

//     return 0;

//}

/// second method by GP method:

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//    int sum =0;

//     for(int i=1; i<=n; i++)
//     {
//         if (n%2==0)
//         {
//             sum=-n/2;
//         }
//         else
//         {
//             sum =-n/2+n;
//         }
//     }
//     printf("The sum is %d",sum);

//     return 0;
// }

// Question: print the factorial of a given number 'n'.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int product=1;

//     for (int i=1; i<=n; i++)
//     {
//         product=product*i;
//     }

//     printf("factorial:-%d",product);

//     return 0;
//}

// HW Question: print the factorials of first 'n' numbers.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int product=1;

//     for(int i=1; i<=n; i++)
//     {
//         product = product*i;
//         printf("factorial of number is %d is %d\n",i,product);
//     }
//         return 0;
// }

// Question : print the fibonacci series.

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int a=0,b=1,sum=0;

//     for(int i = 1; i<=n; i++)
//     {
//         sum =a+b;
//         printf("%d\n",a);
//         a=b;
//         b=sum;
//     }

//     return 0;

// }

// Question : print the fibonacci number;

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     int a=1,b=1,sum=1;

//     for(int i=1; i<=n-2; i++) // sum (1-2)false condition sum(2-2)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//         printf("%d\n",sum);

//     return 0;
// }

// Question : Two numbers are entered through the keyboard. write a program to find the value of one number raised tp the power of another .

// #include<stdio.h>
// int main ()
// {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);

//     int power =1;

//    for (int i=1;i<=b;i++)
//    {
//        power = power*a;
//    }
//    printf(" the power is %d",power);

//     return 0;

// }

/// 2(doubt question)
// #include<stdio.h>
// int main ()
// {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);

//     int power=1;

//     for (int i =1; i<=b; )
//     {
//         power = power * a;
//     }

// }

/// Question :Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop .

// #include<stdio.h>
// int main()
// {
//     // what is typecasting
//     for (int i=65; i<=90; i++)
//     {
//         printf("%d",i);
//         char ch = (char)i;
//         printf("%c\n",ch);
//     }

//     return 0;

// }

// #include<stdio.h>
// int main ()
// {
//     for (int i=97; i<=122; i++ )
//     {
//         char ch = (char)i;
//         printf("%c=>",ch);
//         printf("%d\n",i );
//     }

//     return 0;
// }

/* Homework : Write a program to print out all armstrong
numbers between 1 to 500
if sum of cubes of each digit of the number
is equal to the number itself
, then the number is called an armstrong number .
For example 153=(1*1*1)+(5*5*5)+(3*3*3)*/

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n;
//     printf("*****************Armstrong number in 1 - 500: ****************\n");

//     int m,i,remain;
//     double sum = 0;
//     int count = 0;

//     for (i = 1; i <= 500; i++)
//     {
//         n = i;
//         while (n>0)
//         {
//             count = count + 1;
//             n = n / 10;
//         }

//         m = i;
//         while (m > 0)
//         {
//              remain = m % 10;
//              sum = sum + pow(remain, count);
//              m = m / 10;
//         }

//         if (sum == i)

//         {
//             printf("\n armstrong number: %d",i);
//         }

//         //updating the sum and count for next number to check the armstrong number
//        sum = 0;
//        count = 0;
//     }

//     return 0;
// }

// try again

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     int a ;
//     printf("enter the value of a:");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:");
//     scanf("%d",&b);

//     int i,m,n,remainder;
//     int sum =0;
//     int count=0;
//     for (i=a; i<=b; i++)
//     {  n=i;
//         while (n!=0){
//         count =count+1;
//         n=n/10;
//         }

//         m=i;
//         while(m!=0)
//         {
//             remainder=m%10;
//             sum=sum+pow(remainder,count);
//             m=m/10;

//         }
//         if (sum == i )
//         {
//         printf("\narmstrong number is %d",i);
//         }
//         sum=0;
//         count=0;

//     }
//     return 0;
// }

// Question no 23: Take the number N and the name from the user as inputs and print the name N times

// #include<stdio.h>
// int main ()
// {    int N;
//      printf("enter the value of number:");
//      scanf("%d",&N);

//      char name[20];
//      printf("enter the name:");
//      scanf("%s",name);

// for (int i=1; i<=N; i++)
// {
//     printf("%s\n",name);
// }
// return 0;

// }

// Question no 24: Take a number N from the user as inputs , and print the even numcers up to N.

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for(int i=1; i<=N; i++)
//     {
//         if (i%2==0)
//         {
//             printf("%d\n",i);
//         }
//     }

//     return 0;
// }

// Question no 25: Write a program to print the sum of odd number up to N.

// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int sum=0;

//     for (int i =1; i<=N; i++)
//     {
//         if (i%2!=0)
//         {
//             sum=sum+i;
//         }

//     }
//         printf("%d",sum);

//     return 0;
// }

// Question no 26: Write a program to take two integers M, and N and print the sum of numbers in the range M to N.

// #include<stdio.h>
// int main ()
// {
//     int m;
//     printf("enter the value of m:");
//     scanf("%d",&m);

//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     int sum=0;

//     for (int i=m; i<=n; i++)
//     {
//         sum=sum+i;
//     }

//     printf("sum%d",sum);

//     return 0;

// }

/* Question no 27: Write a program to calculate the sum of
                   the following series where N is input
                   from the user. 1+1/2+1/3+1/4+1/5+......1/N*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     float sum=0;

//     for (float i=1; i<=N; i++)
//     {
//         sum = sum+(1/i);
//     }
//     printf("sum of the series:%f",sum);

//     return 0;
// }

/* Question no 28: Write a program to take a number from the user
                   and print the number digits in the given number.*/

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);

//     int count = 0;

//     while (N > 0)
//     {
//         count = count + 1;
//         N = N / 10;
//     }

//     printf("enter the digit:%d", count);

//     return 0;
// }

/* Question no 29: Write a program to take a number from the user
and print the sum of the digits of the given number.*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int sum=0,M;

//     while (N>0)
//     {
//         M=N%10;
//         sum=sum+M;
//         N=N/10;
//     }

//     printf("sum of the digit:%d",sum);

//     return 0;

// }

/*Question no 30: Write a program to input a number and check
whether it is a perfect square or not.*/
//(Doubt question)

// Note: A perfect square is the product of some integer with itself.

// #include<stdio.h>
// #include<stdlib.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for(int i=1; i<=N; i++)
//     {
//         if (N==i*i)
//         {
//            printf("it's a perfect square");
//            exit(0);
//         }
//         }

//   printf("it's not a perfect square");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);

//     int count = 0;

//     for (int i = 1; i <= N; i++)
//     {
//         if (N == i * i)
//         {
//             count = 1;
//         }
//     }

//     if (count == 1)
//     {
//         printf("it's a perfect square");
//     }
//     else
//     {
//         printf("its not a perfect square");
//     }

//     return 0;
// }

/* Question no 31: Write a program that takes a number from the
user and prints the number that is formed by reversing the digits
of the number. */

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     int remain,reverse=0;

//     while (n>0)
//     {
//         remain=n%10;
//         reverse=reverse*10+remain;
//         n=n/10;
//     }

//     printf("reverse%d",reverse);

//     return 0;
// }

/* Question no 32: write a program to take a number and if a number
has exactly three positive divisors or not. An integer m is a divisor
 of n if an integer k exists such that n=k*m*/

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     int count=0;

//     for (int i=1; i<=n; i++)
//     {
//         if (n%i==0)
//         {
//         count=count+1;
//         }
//     }

//         if (count==3)
//         {
//             printf ("it's number have 3 positive divisor:");
//         }

//    else {

//     printf("it's not 3 positive divisor:");
//    }

//     return 0;

// }

/*Question no 33: Write a program to check whether a number is
palindrome or not.

note: A palindrome is a sequence of character (or numbers) that
reads the same forwards as it does backwards. in other words, it
remains unchanged when reversed.*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int remain,reverse=0;
//     int S=N;

//     while(N>0)
//     {
//         remain=N%10;
//         reverse=reverse*10+remain;
//         N=N/10;
//     }

//     if (reverse==S)
//     {
//         printf("it's a palindrome");
//     }
//     else
//     {
//         printf("it's not a palindrome");
//     }

//     return 0;
// }

/* Question no 34: Write a program to take a number from the user
and print all the factors of the given number. A factor is a number
that can divide another number evenly without leaving a remainder*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//        if (N%i==0)
//        {
//        printf("%d\n",i);
//        }

//     }

//         return 0;
// }

/* Question no:35 Write a program to check if a number is a special
type of number called a 'prime number'. A prime number is a number
that is inly divisible by 1 and itself, and it doesn't for example
the number 7 is a prime number because it can only be divided by 1 and 7
without leaving a remainder. However, the number 12 is not a prime number because
//   */

//  #include<stdio.h>
//  int main()
//  {
//     int N;
//     printf("enter the value of n:");
//     scanf("%d",&N);

//     int count=0;

//     for(int i=1; i<=N; i++)
//     {
//         if (N%i==0)
//         {
//             count=count+1;
//         }
//     }

//     if (count==2)
//     {
//         printf("it's a prime number");
//     }
//     else
//     {
//         printf("it's not a prime number:");
//     }

//     return 0;

//      }

/* Question no 36: Write a program to take two numbers from
the user as input and obtain the HCF and LCM of the two numbers.*/

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);

//     int M;
//     printf("enter the value of M:");
//     scanf("%d", &M);

//     int min;
//     int lcm, hcf=1;
//     if (N < M)
//     {
//         min = N;
//     }
//     else
//     {
//         min = M;
//     }

//     for (int i = 1; i <= min; i++)
//     {
//         if (N % i == 0)
//         {
//             if (M % i == 0)
//             {
//                 hcf = hcf * i;
//             }
//         }
//     }
//     lcm = N * M / hcf;

//     printf("Lcm:%d\nHcf:%d\n", lcm, hcf);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int M;
//     printf("enter the value of M:");
//     scanf("%d",&M);

//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int min,hcf=1,lcm;

//      if (M<N)
//      {
//         min=M;
//      }
//      else
//      {
//         min=N;
//      }

//     for (int i=1; i<=min; i++ )
//     {
//         if (M%i==0)
//         {
//             if (N%i==0)
//             hcf=hcf*i;
//         }
//     }
//     lcm =M*N/hcf;

//     printf("hcf:%d\nlcm:%d\n",hcf,lcm);

//     return 0;
// }

/* Question no 37: Write a program to take a number from the user and then setermine
if that number is a special type of number called a 'perfect number' A
perfect number is a number where the sum of all its factors (excluding the number itself)
is equal to the number itself. Print Yes if the number is a perfect number
else print No.*/

// #include<stdio.h>
// int main()
// {
//     int M;
//     printf("enter the value of M:");
//     scanf("%d",&M);

//     int sum=0;

//     for (int i=1; i<M; i++)
//     {
//         if (M%i==0)
//         {
//         sum=sum+i;
//         }
//     }
//     if (sum==M)
//     {
//         printf("it's a perfect number");
//     }
//     else
//     {
//         printf("it's not a perfect number");
//     }

//     return 0;
// }

/* Question no 38: Write a program to check wheather
a number is Armstrong or not.(Armstrong number is a
number that is equal to the sum of cubes of its digits, for example)*/

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int count=0,sum=0;
//     int remainder;
//     int M=N;
//     int T=N;

//         while(N>0)
//         {
//         remainder=N%10;
//         count=count+1;
//         N=N/10;
//         }

//     while (M>0)
//     {
//         remainder=M%10;
//         sum = sum + pow(remainder,count);
//         M=M/10;
//     }

//     if (T==sum)
//     {
//         printf("it's a armstrong number");
//     }
//     else
//     {
//         printf("it's not a armstrong number");
//     }

//     return 0;

// }

/* Question no 39: Write a program to take N numbers from a
user as input , and print the maximum values among the
given set of N numbers, also take N from the user as input */

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the number of N:");
//     scanf("%d", &N);
//     int current_max = 0,current_min = 0;

//  for (int i = 1; i <= N; i++)
//     {
//         int a;
//         scanf("%d",&a);

//         if (current_max > a)
//         {
//         if (current_min > a)
//             {
//                 current_min = a;
//             }
//         }
//         else{
//             current_min = current_max;
//             current_max = a;

//         }

//     }

//     printf("current max:%d\n current min:%d\n",current_max,current_min);

//     return 0;
// }

/* Question no 40: Write a program to take N numbers from a user as
 input and print the second maximum number among the given set of N
 numbers. Also, take N from the user as input*/

//  #include<stdio.h>
//  int main()
//  {

//  int n;
//  printf("enter the number of n:");
//  scanf("%d",&n);

//  int max=0;
//  int smax=0;

//  for (int i=1; i<=n; i++)
//  {
//     int a;
//     scanf("%d",&a);

//     if (max>a)
//     {
//     if (smax<a)
//     {
//         smax=a;
//     }
//     }
//     else
//     {
//         smax=max;
//         max=a;
//     }
//  }

//  printf("smax:-%d",smax);

//  return 0;

//  }

/* Question no 41: Write a program to take numbers from a user as input,
and print the third maximum number among the given set of N numbers
Also take N from the user as input.*/

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the numbers of n:");
//     scanf("%d", &n);

//     int max = 0;
//     int smax = 0;
//     int tmax = 0;

//     for (int i = 1; i <= n; i++)

//     {
//         int a;
//         scanf("%d", &a);

//         if (max > a)
//         {
//             if (smax > a)
//             {
//                 if (tmax < a)
//                 {
//                     tmax = a;
//                 }
//             }
//             else
//             {
//                 tmax = smax;
//                 smax = a;
//             }
//         }
//         else
//         {
//             tmax = smax;
//             smax = max;
//             max = a;
//         }
//     }

//     printf("third max:-%d", tmax);

//     return 0;
// }

/* Question no 42: Write a program to print the first 'N' fibonocci numbers.
Take N from the user as input.*/

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     int a=0;
//     int b=1;
//     int sum=0;

//     for (int i=1; i<=n; i++)
//     {   sum =a+b;
//         printf("%d ",a);
//         a=b;
//         b=sum;
//     }

//     return 0;

//   }

/* Question no:43(i) Write a program to print the sum of given
numbers of terms (N) for a given value of x in the following
mathematical series:
(input X and N from the user)*/

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     int x;
//     printf("enter the value of x:");
//     scanf("%d",&x);

//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//    float sum =0;

//     for (int i=1; i<=n; i++)
//     {
//         sum =sum+pow(x,i)/i;
//     }

//     printf("%f",sum);

//     return 0;
// }

// Question no 43(ii):  x-(x^3)/3+(x^5)/5-(x^7)/7+(x^9)/9.... upto N terms:

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     int x;
//     printf("enter the value of x:");
//     scanf("%d",&x);

//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     float sum1=0, sum2=0;

//     for(int i=1; i<=n; i++)
//     {
//         if (i%2==0)
//         {
//             sum1=sum1+pow(x,2*i-1)/(2*i-1);

//         }
//         else
//         {
//             sum2=sum2+pow(x,2*i-1)/(2*i-1);
//         }
//     }

//     printf("sum1: %f and sum2:%f \n",sum1,sum2);

//     float sum =sum2-sum1;

//     printf("sum:-%f",sum);

//     return 0;

// }

// 43(iii) x-(x^3)/3!+(x^5)/5!-(x^7)/7!+.... upto n terms

// #include<stdio.h>
// #include<math.h>

// int main ()
// {
//     int x;
//     printf("enter the value of x:");
//     scanf("%d",&x);

//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     float sum1=0;
//     float sum2=0;
//     int factorial=1;
//     int Temp;

//     for(int i=1; i<=n; i++)
//     {
//          factorial=1;
//          Temp = (2*i-1);

//           while(Temp>0)
//          {
//             factorial = factorial * (Temp);
//              Temp--;
//          }

//         if (i%2!=0)
//         {
//             sum1=sum1+pow(x,2*i-1)/factorial;
//         }
//         else
//         {
//             sum2=sum2+pow(x,2*i-1)/factorial;
//         }
//     }

//    // printf("%f %f ",sum1,sum2);

//    float sum= sum1-sum2;

//     printf("sum%.4f",sum);

//     return 0;
// }

/* Question no 44 Write a program to take value N from the user and print the following pattern
based on the user input.*/

/* 1) N=5
 *
 **
 ***
 ****
 *****
 */

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//        int j=1;
//        while(j<=i)
//        {
//           printf("*");
//           j++;
//        }
//        printf("\n");

//     }

//     return 0;
// }

/* 2) N=5
----*
---**
--***
-****
*****
*/

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     for (int i=1; i<=n; i++)
//     {
//         int j=0;
//         while (j<n-i)
//         {
//             printf("-");
//             j++;
//         }
//         int k=1;
//         while(k<=i)
//         {
//             printf("*");
//             k++;
//         }

//         printf("\n");
//     }

//      return 0;
// }

/* 3) N=5
*****
****
***
**
*
*/

// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//         int j=N;
//         while (j>=i)
//         {
//             printf("*");
//             j--;
//         }
//         printf("\n");
//     }
// }

/* 4) N=4
1
23
456
78910
*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

// int num =0;
//     for (int i=1; i<=N; i++)
//     {
//         int j=1;
//         while(j<=i)
//         {
//          //  int num=0;
//             num=num+1;
//             printf("%d",num);
//             j++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

/* 5) N=4
0
2 4
4 8 8
8 16 16 16
*/

// #include <stdio.h>
// #include<math.h>
// int main()
// {
//    int N;
//    printf("enter the value of N:");
//    scanf("%d", &N);

//    int a = 0, b = 1;

//    for (int i = 1; i <= N; i++)
//    {
//       int j = 1;
//       while (j <= i)
//       {
//          if (j == 1)
//          {
//             printf("%d", a);
//             j++;
//          }

//          else
//          {   int k=pow(2,b);
//             printf("%d", k);
//             j++;
//          }

//       }

//       a = pow(2, i);
//       b++;

//       printf("\n");
//    }

//    return 0;
// }

/* 6) N=5
1
121
12321
1234321
123454321
*/

//    #include<stdio.h>
//    int main()
//    {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             printf("%d",j);
//             j++;
//         }
//         int k=1;
//         while (k<i)
//         {
//             printf("%d",k);
//             k++;
//         }
//         printf("\n");
//     }

//     return 0;

//    }

/*Question no:45 Write a program to take a number
N from the user and print the following pattern with
the input given by the user:*/

/* 1) N=4
---*
--***
-*****
*******
*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for ( int i=1; i<=N; i++)
//     {
//         int j=1;
//         while (j<=N-i)
//         {
//             printf("-");
//             j++;
//         }
//         int k=1;
//         while(k<=2*i-1)
//         {
//             printf("*");
//             k++;
//         }

//         printf("\n");
//     }

//     return 0;
// }

/* 2) N=4
---*
--***
-*****
*******
-*****
--***
---*

*/

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);
// int i=1;
//     for (int i = 1; i <= N; i++)
//     {
//         int j = 1;
//         while (j <= N-i)
//         {
//             printf("-");
//             j++;
//         }
//         int k = 1;
//         while (k <= 2 * i - 1)
//         {
//             printf("*");
//             k++;
//         }
//         printf("\n");
//     }

//     for (int i=N-1; i>=1; i--)

//     {
//         int j = 1;
//         while (j <= N-i)
//         {
//             printf("-");
//             j++;
//         }
//         int k = 1;
//         while (k <= 2 * i - 1)
//         {
//             printf("*");
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/* 3) N=4
 *------*
 **----**
 ***--***
 ********
 ***--***
 **----**
 *------*
 */

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             printf("*");
//             j++;
//         }

//         int k = i;
//         while (k < 2 * N - i)
//         {
//             printf("-");
//             k++;
//         }
//         int l = 2 * N;
//         while (l > 2 * N - i)
//         {
//             printf("*");
//             l--;
//         }

//         printf("\n");
//     }

//     for(int i=N-1; i>=1; i--)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             printf("*");
//             j++;
//         }
//         int k=2*N-i;
//         while(k>i)
//         {
//             printf("-");
//             k--;
//         }
//         int l=2*N;
//         while(l>2*N-i)
//         {
//             printf("*");
//             l--;
//         }
//         printf("\n");

//     }

//     return 0;
// }

/* 4) N=4
---4
--434
-43234
4321234
-43234
--434
---4
*/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N;");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//         int j=i;
//         while(j<N)
//         {
//             printf(" ");
//             j++;
//         }
//         int k=N;
//         while (k>N-i)
//         {
//             printf("%d",k);
//             k--;
//         }
//         int l=N+2-i;
//         while(l<=N)
//         {
//             printf("%d",l);
//             l++;
//         }
//         printf("\n");

//         }


//         for (int i=N-1; i>=1; i--)
//         {
//          int j=i;
//          while(j<N)
//          {
//             printf(" ");
//             j++;
//          }
//          int k=N;
//          while (k>N-i)
//          {
//             printf("%d",k);
//             k--;
//          }
//          int l=N+2-i;
//          while(l<=N)
//          {
//             printf("%d",l);
//             l++;
//          }


//          printf("\n");
//          }
          
//     return 0;

//     }

/*Question no 46: Write a program to take a number N from the
user and print the following pattern with the input given by the user:*/

/*1) N=5

*
**
*-*
*--*
*****/

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N;");
//     scanf("%d",&N);

//     for(int i=1; i<=N; i++)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             if (j==1)
//             {
//                 printf("*");
//                 // j++;
//             }
//              else if (j==i)
//             {
//                 printf("*");
//                 // j++;
//             }
//             else if (i==N)
//             {
//                 printf("*");
//                 // j++;
//             }
//             else
//             {
//               printf("-");
//             //   j++;

//             }
//             j++;

//         }
//             printf("\n");

//     }

//     return 0;

// }

/*2) N=6
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *

 */

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//         int j=1;
//         while(j<=N)
//         {
//             if (j==1)
//             {
//                 printf("*");
//             }
//             else if (j==N)
//             {
//                 printf("*");
//             }
//             else if (i==1)
//             {
//                 printf("*");
//             }
//             else if (i==N)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//             j++;
//         }
//         printf("\n");
//     }

//     return 0;

// }

/* 3) N=4 (doubt question)
  ---*
 -- *-*
 - *---*
  *-----*
   *   *
    * *
     *

      */

// #include<stdio.h>
// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int p=1;

//     for (int i=1; i<=N; i++)
//     {
//         int j=i;
//         while(j<N)
//         {
//             printf(" ");
//              j++;
//         }
//         int k=1;
//         while(k<=)
//         {
//             if (k==1)
//             {
//                 printf("*");
//             }
//             else if (k==p)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//             k++;
//         }
//         printf("\n");
//             p=p+2;
//     }

//     for (int i=N-1; i>=1; i--)
//     {
//         int j=i;
//         while(j<N)
//         {
//             printf("-");
//              j++;
//         }
//         int k=1;
//         while(k<=p)
//         {
//             if (k==1)
//             {
//                 printf("*");
//             }
//             else if (p==N)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf("-");
//             }
//             k++;
//         }
//         printf("\n");
//             p=p-2;

//     }

//     return 0;

// }

/* 4) N=4
*-*-*-*
-*-*-*
--*-*
---*
--*-*
-*-*-*
*-*-*-*
*/

// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//         int j=1;
//         while(j<i)
//         {
//         printf(" ");
//         j++;
//         }
//         int k=0;
//         while (k<=N-i)
//         {
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }

//     for (int i=N-1; i>=1; i-- )
//     {
//         int j=1;
//         while(j<i)
//         {
//             printf(" ");
//             j++;
//         }
//         int k=0;
//         while(k<=N-i)
//         {
//             printf("* ");
//             k++;
//         }
//         printf("\n");
//     }

//     return 0;

// }

/*Question no 47: Write a program to take N numbers from the user
and print the highedt common factor(HCF) of the given set of numbers
. Take  N from the user as input.*/


// #include <stdio.h>

// int main() {
//     int n;

//     // Get the number of elements from the user
//     printf("Enter the number of elements (n): ");
//     scanf("%d", &n);

//     // Check if n is valid
//     if (n <= 1) {
//         printf("Please enter a valid value for n (n should be greater than 1).\n");
//         return 1;
//     }

//     int hcf;

//     // Input the numbers from the user and initialize HCF
//     printf("Enter number 1: ");
//     scanf("%d", &hcf);

//     // Find HCF iteratively
//     for (int i = 1; i < n; i++) {
//         int num;

//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &num);

//         // Find HCF of the current number and the previous HCF
//         int smaller;
//         if (hcf < num) {
//             smaller = hcf;
//         } else {
//             smaller = num;
//         }

//         int tempHCF = 1;  // temporary variable to store HCF

//         // Find the greatest common factor
//         for (int j = 2; j <= smaller; j++) {
//             if (hcf % j == 0 && num % j == 0) {
//                 tempHCF = j;
//             }
//         }

//         hcf = tempHCF;
//     }

//     // Print the result
//     printf("The Highest Common Factor (HCF) is: %d\n", hcf);

//     return 0;
// }


// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the numbers of N terms:");
//   scanf("%d",&N);

//   if (N<=1)
//   {
//     printf("enter the valid number, number should be more than 1\n");
//   return 1;
//   }


//   int hcf;
//   printf("enter the number1: ");
//   scanf("%d",&hcf);

//   for(int i=1; i<N; i++)
//   {
//     int Num; 
//     printf("enter the number %d:",i+1);
//     scanf("%d",&Num);
  
//   int smallest;

//   if (hcf<Num)
//   {
//      smallest =hcf;
//   }
//   else
//   {
//     smallest=Num;
//   }

//   int temphcf=1;

//   for (int j=2; j<=smallest; j++)
//   {
//     if (hcf%j==0) 
//     {
//       if (Num%j==0)
//       {
//         temphcf=j;
//       }
//     }
//   }
//     hcf=temphcf;
//   }

//   printf("hcf is %d\n",hcf);
  
//   return 0;

// }


   
   
 

/*Question no. 48: Write a program to print all Armstrong numbers
in a given range og M to N.*/

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     int M;
//     printf("enter the value of m:");
//     scanf("%d",&M);

//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int x,y,remain,sum=0,count=0;

//     for (int i=M; i<=N; i++)
//     {    x=i;
//         while(x>0)
//         {
//         remain=x%10;
//         count=count+1;
//         x=x/10;
//         }

//         {  y=i;
//         while(y>0)
//         {
//             remain=y%10;
//             sum=sum+pow(remain,count);
//             y=y/10;
//         }
//         }

//         if (sum==i)
//         {
//             printf("Armstrong number is %d\n",i);
//         }

//         sum=0;
//         count=0;
//     }
//     return 0;
// }

/*Question no 49: Write a program to take a number and print the count
of the prime numbers that are strictly less than a number.*/

// #include<stdio.h>

// int main ()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int sum=0;

//     for (int i=2; i<N; i++)
//     {
//       int count = 0;

//      for (int j=2; j<=i/2; j++)
//       {
//         if (i%j==0)
//       {
//         count=count+1;
//       }

//     }

//     if(count==0)
//     {

//       sum=sum+1;
//     }}

// printf("Prime number:%d",sum);

// return 0;

// }

/* Question no 50: Write a program to print only the prime
factors of a given number 'N'. Take N from the user as input
prime factors are the prime numbers that divide a given
number without leaving a remainder.*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=2; i<=N; i++)
//   {
//     int count =0;

//     for (int j=2; j<=i/2; j++)
//     {
//       if (i%j==0)
//       {
//         count=count+1;
//       }
//     }

//     if (count==0)
//     {
//       if (N%i==0)
//       {
//       printf("prime number is %d\n",i);
//       }
//     }
//   }
//   return 0;

// }

/*Question no. 51: Take a number N from the user as input and
repeatedly find the sum of the digits of the number till you
get a single digit. Print the digit . Example : 678=6+7+8=21,21=2+1=3  */


// #include <stdio.h>
// int main()
// {
//    int N;
//    printf("enter the value of N:");
//    scanf("%d", &N);

//    int sum = 0,sum1=0, remain;

//    while (N > 0)
//    {
//       remain = N % 10;
//       sum = sum + remain;
//       N = N / 10;
//    }

//    while (sum > 0)
//    {
//       remain=sum%10;
//       sum1=sum1+remain;
//       sum=sum/10;
//    }

// printf("sum:%d",sum1);

//    return 0;
// }




