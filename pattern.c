/* Question 1: Print the given pattern solid rectangle.
 n=3
 *****
 *****
 *****
*/  


// #include<stdio.h>
// int main()
// {
//     int N;
//     printf("enter the number of pattern:");
//     scanf("%d",&N);

//     for(int i=1; i<=N; i++)
//     {
//         int j=1;
//         while(j<=2*N-1)
//         {
//             printf("*");
//             j++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*HW: Print a given pattern 
  ****
  ****
  ****
  ****
  */

//  #include<stdio.h>
//  int main ()
//  {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);

//     for (int i=1; i<=N; i++)
//     {
//     for (int j=1; j<=N; j++)
//     {
//         printf("*");
        
//     }
//     printf("\n");

//     }

//     return 0;
//  }

/*Question no : Print the given pattern
1234
1234
1234
1234
 */

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N; j++)
//     {
//       printf("%d",j);
//     }
//     printf("\n");
//   }

//   return 0;
// }


/* 
1
13
135
1357
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for(int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=2*i-1; j=j+2)
//     {
//       printf("%d",j);
//     }
//     printf("\n");
//   }
//   return 0;
// }


/*
A 
A B 
A B C 
A B C D 
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {  
//     for ( int j=1; j<=i; j++)
//     {    
//         int d =j+64;
//         char ch= (char)d;
//         printf("%c ",ch);
//     }
   
//     printf("\n");
//   }

//   return 0;
// }

/*
1
AB
123
ABCD
12345
*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);


//  for (int i=1; i<=N; i++)
//  {
//   for (int j=1; j<=i; j++)
//   {
//     if (i%2==0)
//     {
//       int d =j+64;
//       char ch=(char)d;
//       printf("%c",ch);
//     }
//     else
//     {
//         printf("%d",j);
//     }

//   }
//   printf("\n");
//  } 

//  return 0;
// }

/* Print the pattern 
--*
--*
*****
--*
--*
*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   { for (int j=1; j<=N; j++)
//   {
//      if (i==3)
//      {
//       printf("*");
//      }

//      else if (j==3)
//      {
//       printf("*");
//      }
//      else
//      {
//       printf(" ");
//      }
     
//   }
//      printf("\n");
// }
//     return 0;
// }

/* HW: Print the given pattern 

******
*    *
*    *
******

*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N+2; j++)
//     {
//       if (i==1)
//       {
//         printf("*");
//       }
//       else if (j==1)
//       {
//         printf("*");
//       }

//       else if (i==N)
//       {
//         printf("*");
//       }
//       else if (j==N+2)
//       {
//         printf("*");
//       }
//       else 
//       {
//         printf(" ");
//       }

//     }
//     printf("\n");

//     }
    
//   return 0;

// }

/*Question : Print the given pattern 

*---*
-*-*
--*
-*-*
*---*

*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N; j++)
//     {
//       if (i==j)
//       {
//         printf("*");
//       }
//       else if (j==N+1-i)
//       {
//         printf("*");
//       }
//       else 
//       {
//         printf(" ");
//       }
//     }
//     printf(("\n"));

//   }

//   return 0;
// }

/*
1
23
456
78910*/

// #include<stdio.h>
// int main()
// {
//   int N; 
//   printf("enter the value of N:");
//   scanf("%d",&N);

//    int k=1; 

//   for (int i=1; i<=N; i++)
//   {
//     for (int j =1; j<=i; j++)
//     {
     
//       printf("%d",k);
//       k=k+2;
//     }
//       printf("\n");
      
//   }

//   return 0;

// }

/* 
1
01
101
0101
*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//     int k;

//   for (int i=1; i<=N; i++)
//     {
//       if (i%2!=0)
//     {
//       k=1;
//     }
//     else{
//       k=0;
//     }
  
//     for (int j=1; j<=i; j++)
//       { 
//         printf("%d",k);
//         if (k==0)
//         {
//           k=1;
//         }
//         else{
//           k=0;
//         }
    

//       }
//       printf("\n");
//     }
//     return 0;
//   }

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of n:");
//   scanf("%d",&N);

//   for(int i=1; i<=N; i++)
//   {
//     for(int j=1; j<=i; j++)
//     { 
//       if ((i+j)%2==0)
//       {
//       printf("1");
//       }
//       else
//       {
//         printf("0");
//       }
//     }

//     printf("\n");
//   }
//   return 0;
// }

/*Question : Print the given pattern
    
---*
--**
-***
****

*/


// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for(int i=1; i<=N; i++)
//   {
//     for (int j=0; j<N-i; j++)
//     {
//       printf(" ");
//     }
    
//     { int k=N;           //int k=1;
//       while (k>N-i)      //k<=i;
//       {
//         printf("*");
//         k--;              //k++;
//       }
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*
---****
--****
-****
****
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//       printf(" ");
//     }
//     int k=2*N-1;
//     while (k>=N)
//     {
//       printf("*");
//       k--;
//     }
//     printf("\n");
//   }

//   return 0;

// }

/* HW  : Print the given pattern 
---A
--AB
-ABC
ABCD */

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//       printf("-");
//     }
//     for (int k=65; k<i+65; k++)
//     { 
//      char ch=(char)k;
//      printf("%c",ch);
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*
---*
--***
-*****
*******
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//         printf("-");
//     }
//     for (int k=1; k<=i; k++ )
//     {
//       printf("*");
//     }
//     for (int l=1; l<i; l++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }


// 2nd mwthod with time complexity :

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//         printf("-");
//     }
    
//     for (int l=1; l<=2*i-1; l++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }


/*HW: Print the given pattern
---1
--123
-12345
1234567*/

//  #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//         printf("-");
//     }
    
//     for (int l=1; l<=2*i-1; l++)
//     {
//       printf("%d",l);
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*Question : Print the given pattern:

1
11
121
1331
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   int num=1;

//   for (int i=1; i<=N; i++)
//   {
//       for (int j=1; j<=i-i+1; j++)
//       {
//         printf("%d",num);
//         num=num*11;
//       }
//       printf("\n");
//   }

// return 0;
// }

/*
---A
--ABC
-ABCDE
ABCDEFG
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//       printf("-");
//     }
//       int a=65;
//     for(int k=1; k<=2*i-1; k++)
//     { 
//        char ch = (char)a; 
//       printf("%c",ch);
//       a++;
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*Question : Print the given pattern :
---1
--121
-12321
1234321
*/

// #include<stdio.h>
// int main ()
// {
//   int N;
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for(int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//         printf("-");
//     }
//     for (int k=1; k<=i; k++)
//     {
//       printf("%d",k);
//     }
//     for (int l=i-1; l>=1; l--)
//     {
//       printf("%d",l);
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*
---A
--ABA
-ABCBA
ABCDCBA
*/

// #include<stdio.h>
// int main()
// {
//   int N; 
//   printf("enter the value of N:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//         printf("-");
//     }
//     int a=65;
//     for (int k=1; k<=i; k++)
//     {
//         char ch=(char)a;
//         printf("%c",ch);
//         a++;
//     }
//      int b=64;
//      for(int l=i-1; l>=1; l--)
//      {
//       char ch=(char)b+l;
//       printf("%c",ch);

//      }
//      printf("\n");
//   }

//   return 0;
// }


/*
---*
--***
-*****
*******
-*****
--***
---*

*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the raws:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//       printf("-");
//     }
//     for (int k=1; k<=2*i-1; k++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   for (int i=N-1; i>=1; i--)
//   {
//     for (int j=1; j<=N-i; j++)
//     {
//       printf("-");
//     }
//     for (int k=1; k<=2*i-1; k++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }

/*
*******
***-***
**---**
*-----*
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the number of raw:");
//   scanf("%d",&N);

//   for (int i=1; i<=N; i++)
//   {
//     for (int j=0; j<=N-i; j++)
//     {
//       printf("*");
//     }
//     for (int k=1; k<=2*i-3; k++)
//     {
//       printf(" ");
//     }
//     for (int l=0; l<=N-i; l++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }

/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/


// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the number of raw:");
//   scanf("%d",&N);

//   int min=0;

//   for (int i=1; i<=2*N-1; i++)
//   {
//     for (int j=1; j<=2*N-1; j++)
//     {
//       int a=i;
//       if(a>N)
//       {
//         a=2*N-i;
//       }
//       int b=j;
//       if (b>N)
//       {
//         b=2*N-j;
//       }
//       if (a<b)
//       {
//         min=a;
//       }
//       else 
//       {
//         min=b;
//       }
//       printf("%d",N+1-min);
//     }
//       printf("\n");
//   }

//   return 0;

// }


/*
1111111
1222221
1233321
1234321
1233321
1222221
1111111
*/

// #include<stdio.h>
// int main()
// {
//   int N;
//   printf("enter the number of raw:");
//   scanf("%d",&N);

//   int min=0;

//   for (int i=1; i<=2*N-1; i++)
//   {
//     for (int j=1; j<=2*N-1; j++)
//     {
//       int a=i;
//       if(i>N)
//       {
//         a=2*N-i;
//       }
//       int b=j;
//       if (b>N)
//       {
//         b=2*N-j;
//       }
//       if (a<b)
//       {
//         min=a;
//       }
//       else 
//       {
//         min=b;
//       }
//       printf("%d",min);
//     }
//       printf("\n");
//   }

//   return 0;

// }

















