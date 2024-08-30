/* Question no 52: Write a program to print all the numbers
from the given array using a loop.
L={23,45,32,25,46,33,71,90}*/

// #include<stdio.h>
// int main ()
// {
// // {   int N;
// //     printf("enter the value the of N:");
// //     scanf("%d",&N);

//    int L[8]={23,45,32,25,46,33,71,90};

//     // int i=0;
//     // while (i<8)
//     // {
//     //     i=L[i];
//     //     i++;
//     // }

//     int j=0;
//     while(j<8)
//     {
//         printf("%d ",L[j]);
//         j++;
//     }

//     return 0;
// }

/*Question no 53: Write a program to create a array
of natural numbers till 20 and print it.  (time complexity)*/

// #include<stdio.h>
// int main ()
// {   int N;
//     printf("enter the number of terms:");
//     scanf("%d",&N);

//     int arr[N];
//     int k=1, i=0;

//     for(int k=1; k<=N; k++)
//     {
//         arr[i]=k;i++;
//         //  printf("%d ",k);
//     }

//   for (int i=0; i<N; i++)
// {
//   printf("%d ",arr[i]);
// }
//     return 0;vg
// }

/*Question no 54: Write a program to reserve the array and print
the reserved array, */

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("number of size of array:");
//   scanf("%d",&N);

//   int arr[N];

//   for (int i=0; i<N; i++)
//   {
//     scanf("%d",&arr[i]);
//   }

//   for (int i=N-1; i>=0; i--)
//   {
//     printf("%d ",arr[i]);
//   }

//   return 0;
// }

/*Question no 55: Write a program to take size of array and target
as input from the user and check whether the target exists in this array
or not.*/

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//   int N;
//   printf("enter the size of array:");
//   scanf("%d",&N);

//   int arr[N];

//   for (int i=0; i<N; i++)
//   {
//     scanf("%d",&arr[i]);
//   }

//   int Target_element;
//   scanf("%d",&Target_element);

//   for (int i=0; i<N; i++)
//   {
//       if (Target_element==arr[i])
//       {
//          printf("target exist in this array");
//          exit (0);
//       }
//   }
//   printf("target not exist in this array");

//   return 0;

// }

/* Question no 56: Write a program to print the sum of all the odd numbers
and even numbers in the given array.
Note: In the output, you should print odd numbers sum and even numbers sum
in this only.*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("size of array:");
//   scanf("%d",&N);

//   int arr[N];
//   int Even_Sum=0, Odd_Sum=0;

//   for (int i=0; i<N; i++)
//   {
//       scanf("%d",&arr[i]);
//   }
//   for (int i=0; i<N; i++)
//   {
//       if (arr[i]%2==0)
//       {
//         Even_Sum=Even_Sum+arr[i];
//       }
//       else
//       {
//         Odd_Sum=Odd_Sum+arr[i];
//       }
//   }
//   printf("Even Sum:%d\n Odd Sum:%d\n",Even_Sum,Odd_Sum);

//   return 0;
// }

/*Question no 57: Write a program to take N numbers from as input and store
them in an array and then take another numbers from the user M, and delete the Mth element from the array.
print the final array.*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the size of array:");
//   scanf("%d",&N);

//   int arr[N];

//   for (int i=0; i<N; i++)
//   {
//      scanf("%d",&arr[i]);
//   }

//   int M;
//   scanf("%d",&M);

// for (int i=M-1; i<N; i++)
// {
//       arr[i] = arr[i+1];
// }

// for (int i=0; i<N-1; i++)
// {
//   printf("%d ",arr[i]);
// }
// return 0;

// }

/*Question no 58: Write a program to take N numbers from a user as input
and take another numbers from the user M, and a number X from the user
inserted at the Mth location
Note: (Do not use array)*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the size of array:");
//   scanf("%d",&N);

//   int arr[N];

//   for (int i=0; i<N; i++)
//   {
//     scanf("%d",&arr[i]);
//   }

//   int M;
//   scanf("%d",&M);

//   int X;
//   scanf("%d",&X);

//   int temp;

//   for (int i=M-1; i<N+1; i++)
//   {
//         temp=arr[i];
//         arr[i]=X;
//         X=temp;
//   }

//   for(int i=0; i<N+1; i++)
//   {
//     printf("%d ",arr[i]);
//   }

//   return 0;
// }

/*Question no 59: Write a program to take N numbers from a user as input and
print the duplicates in those N numbers, Also take N as an input
from the user.*/

// #include <stdio.h>
// int main()
// {
//   int N;
//   printf("enter the size of array:");
//   scanf("%d", &N);

//   int arr[N];
//   int count = 0;

//   for (int i = 0; i < N; i++)
//   {
//     scanf("%d", &arr[i]);
//   }

//   for (int i = 0; i < N - 1; i++)
//   {
//     for (int j = i + 1; j < N; j++)
//     {
//       if (arr[i] == arr[j])

//       {
//         printf("%d ", arr[i]);
//         break;
//       }
//     }
//   }
// printf("no dublicates")
//   return 0;
// }

// (2nd method)

// #include <stdio.h>
// int main()
// {
//   int N;
//   printf("enter the size of array:");
//   scanf("%d", &N);

//   int arr[N];

//   for (int i = 0; i < N; i++)
//   {
//     scanf("%d", &arr[i]);
//   }

//   int flag=0;

//   for (int i = 0; i < N; i++)
//   {  int count = 0;
//     for (int j = i; j < N; j++)
//     {
//       if (arr[i] == arr[j])

//       {
//         count=count+1;
//       }
//     }
//     if (count>1)
//     {
//         printf("%d",arr[i]);
//         flag=1;
//     }

//   }
//     if (flag==0)
//     {
//         printf("no dublicate");
//     }
//   return 0;
// }

/*Question no 60: Write a program to take input n from the user
and print pascal's triangle of n rows.*/

// #include <stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d", &N);

//     int arr[N];
//     int a = 1;

//     for (int i = 0; i < N; i++)
//     {
//         arr[i] = a;
//         printf("%d\n", arr[i]);
//         a = arr[i] * 11;
//     }

//     return 0;
// }

/*Question no 61: Write a program to take a 
numbers from the user and print the frequency
of every numbers.*/
/* wrong question*/

// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of n:");
//     scanf("%d",&N);

//     int arr[N];
//     int S;


//     for (int i=0; i<N; i++)
//     {   int Element;
//         scanf("%d",&Element);
//     }

//     int i=0;
//      while(i<N-1)
//     {   int count =0;
//         for (int j=i; j<N; j++)
//         {   
//             if (arr[i]==arr[j])
//             {
//                 count++;
//                 S=arr[i];
//             }
//         }
//             printf("%d %d",arr[i],count);
//             i++;

//             if (arr[i]==S)
//             {
//                 i++;
//             }

//     }

//       return 0;

//     }


/*Question no 62: Write a program that rotates the elements 
of a list so that the elements at the first index move
to the second elements at the second index move to 
the third and so on. the last element to the move first index.*/

// wrong question 


// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("number of raws:");
//     scanf("%d",&N);

//     int a[N];

//     for (int i=0; i<N; i++)
//     {    
//         int Element;
//         scanf("%d",&Element);
//     }

//         int M,temp=0;
//         scanf("%d",&M);

//          for (int i=1; i<=M; i++)

//         {
//             for (int j=0; j<N-1; j++)
//             {

//                 temp = a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }

//         for(int k=0; k<N; k++)
//         {
//             printf("%d",a[k]);
//         }

//          return 0;

//             }


/*Question no: 63: Write a program to take a binary array which contains
0and 1, and print the maximum numbers of consecutive 1's in the array. */

//Wrong question 

// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     int arr[N];
//     int min=0,max=0;
    
//     for (int i=0; i<N; i++)
//     {   
//         int Element;
//         scanf("%d",&Element);
//     }
        
       
//     for (int i=0; i<N-1; i++)
//     {    
//         for (int j=i; j<N; j++)
//         {    int count =0;
//             if (arr[i]==1)
//             if (arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
            
//             min=count;

//             if (max>min)
//             {
//                 max=max;
//             }
//             else
//             {
//                 max=min;
//             }

//     }

//     printf("%d",max);
    

//     return 0;
// }


/*Question 64: Write a program to take two */



































