///// Answer to the questio no 1

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);


// if(n%2==0){
//     printf("Even number");

// }
// else {
//     printf("odd number");
// }
  
// return 0;

// }



// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of a:-");
//     scanf("%d",&n);

//     if(n%2==0){
//         printf("even number");

//     }
//     if(n%2!=0){
//         printf("odd number");

//     }
//     return 0;

// }


////answer to the question no 2

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     if (n%5==0){ 
//     printf("divesible by 5");
// }

//     else {
//         printf("not divisible by 5");
//          }
          
//           return 0;

// }

// #include<stdio.h>
// int main ()
// {
// int n;
// printf("enter the value of n:-");
// scanf("%d",&n);

// if(n%5==0){
//     printf("divisible by 5");

// }   

// if (n%5!=0);
// {
//     printf(" not divisible by 5");
// }
// }


//// Answer to the question no 3

// #include<stdio.h>
// int main ()
// {
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);

//     if(year%4==0){
//         printf("leap year");
//     }
//     else { 

//     printf("not leap year");
// }
// return 0;

// }


// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);

//     if(year%4==0){
//         printf("leap year");
//     }
//     if(year%4!=0){
//         printf("not leap year");
//     }
//     return 0;

// }


//// Answer to the quesstion no 4

// #include<stdio.h>
// int main ()
// {
//     int number;
//     printf("enter the value of number:-");
//     scanf("%d",&number);

//     if(number<0) 
//     {
//         number=number *( -1); 
//     }

//     printf("The absolute value is : %d",number);


//     return 0;


// }



////Answer to the question no 5

// #include<stdio.h>
// int main ()
// {
//     int cost_price;
//     printf("enter the value of cost price:-");
//     scanf("%d",&cost_price);

//     int selling_price;
//     printf("enter the value of selling price:-");
//     scanf("%d",&selling_price);
//     int profit = selling_price - cost_price;
//     int loss = selling_price-cost_price;
//     int no_profit_no_loss=selling_price-cost_price;

//     if (selling_price>cost_price)
//     {
//         printf ("profit:- %d",profit);
//     }

//    else if(selling_price<cost_price)
//     {
//         printf("loss:-%d",loss);
//     }

//     else {

//         printf("no loss no profit:- 0");
//     }
//     return 0;
//     }
   

   //// Answer to the question no 6

//    #include<stdio.h>
//    int main ()
//    {
//     int length;
//     printf("enter the value of length:-");
//     scanf("%d",&length);

//     int breadth;
//     printf("enter the value of breadth:-");
//     scanf("%d",&breadth);

//     int area_of_rectangle = length*breadth;
//     int perimeter_of_rectangle =2*(length+breadth);

//     if (area_of_rectangle> perimeter_of_rectangle)
//     {
//         printf("area of rectangle is greater than its perimeter ");
        
//     }
//     else {
//         printf("area of rectangle is not greater than its perimeter");

//         return 0;
//     }

//    }



///// Answer to the question no 7

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     if (n>99 && n<1000)
//     {
//         printf("number is 3 digit number");
//     }
//     else {
//         printf("number is not a 3 digit number");
//     }
//     return 0 ;



// }

/// Answer to the question no 8

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     if(n%5==0 && n%3==0)
//     {
//         printf("it is divisible by 5 and 3");
        
//     }

//     else{printf("it is not divisible by 3 and 5");}
   
//    return 0;
   
//     }


////Answer to the question no 9

// #include<stdio.h>
// int main ()
// {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);

//     int c;
//     printf("enter the value of c:-");
//     scanf("%d",&c);

//     if(a>b && a>c)    {
//         printf("a is greatest number ");
//     }

//     else if(b>a && b>c) {
//       printf("b is greatest number");
//     }

//     else if (c>a && c>b)
//     {
//         printf("c is greatest number");
//     }
//     return 0;


// }



//// Answer to the question no 10

// #include<stdio.h>
// int main ()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if ((a+b)>c && (b+c)>a && (a+c)>b)
//     {
//         printf("its valid triangle ");
//     }
//     else {printf("it's not a valid triangle");}
//     return 0;


// }

//// answer to the question no 11
// #include<stdio.h>
// int main ()
// {
//     int ram, shyam, ajay;
//     scanf("%d %d %d",&ram,&shyam,&ajay);

//     if(ram>shyam && ram>ajay)
//     {
//         printf("ram is youngest boy");

//     }
//     else if (shyam>ram && shyam>ajay)
//     {
//         printf("shyam is youngest boy");

//     }
//     else if(ajay>ram && ajay> shyam)
//     {
//         printf ("ajay is youngest boy");
//     }
//     return 0 ;
// }


///Answer to the question no 12

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     if (n>0)
//     {
//         printf("positive number");
//     }
//     else if(n<0)
//     {
//         printf("negative number");
//     }

//     else {
//         printf("zero");
//         }

//         return 0;
// }




//// Answer to the question no 13

// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);

//     if (n%2==0){
//             printf ("smallest number:-%d",n);
//         }
//         else{  printf("smallest number:-%d",(n*2));
//         }
//          return  0 ;
    
//     }




//// Answer to the question no 14

// #include<stdio.h>
// int main ()
// {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);

//     int c;
//     printf("enter the value of c:-");
//     scanf("%d",&c);


//     if(a>b){
//       if (a>c){
//                printf("a is greatest number ");
//               }  
//                 else {
//                         printf("c is greatest number");
//                      }
//                         }  
//       else if (b>c)
//          {
//           printf("b is greatest number");
//          }
//            else
//              {
//                printf("c is greatest number");
//              }
                        
//             return 0;
                  
                  
//                          }

                    
                



///// Answer to the question no 15

// #include<stdio.h>
// int main ()
// {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);

//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);

//     int c;
//     printf("enter the value of c:-");
//     scanf("%d",&c);

//     int d;
//     printf("enter the value of d:-");
//     scanf("%d",&d);

//     if (a>b)
//     {
//         if(a>c)
//         {
//             if (a>d){
//                 printf("a is greatest number");
//             }
//             else
//                printf("d is greatest number");
//         }   
//       else 
//       {
//          if(c>d)
//            printf("c is greatest number");
//          else
//            printf("d is greatest number");
//       }
//     }
//     else if(b>c)
//     { 
//        if(b>d)
//          printf("b is greatest number");
//        else
//          printf("d is greater number");
//     }

//     else 
//     {
//        if(c>d)
//          printf("c is greatest number");
//        else
//          printf("d is greatest number");
//     }
       
                        
//    return 0;

//  }





///Answer to the question no 16

// #include<stdio.h>
// int main ()
// {
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);

//     if(year%400==0){
//         printf("leap year");
//     }

//     else if (year%100==0){
//         printf("not leap year");
//     }
//     else if (year%4==0){
//         printf("leap year");
//     }
//     return 0;

//     }



//// Answer to the question no 17

// #include<stdio.h>
// int main ()
// {
//    int a;
//    printf("enter the value of a:-");
//    scanf("%d",&a);


//   int b;
//   printf("enter the value of b:-");
//   scanf("%d",&b);

//   int c;
//   printf("enter the value of c:-");
//   scanf("%d",&c);

//   if(a>b)
//   {
//        if (a>c)
//        {
//             if(b>c)
//             {
//                printf("smax:-%d",b);
//             }
//            else 
//            {       
//              printf("smax:-%d",c);
//            }
//        }

//        else
//        {
//          printf("smax:-%d",a);
//       }
   
      
//    }
   
//    else if(b>c)
//    {
//       if(c>a)
//       {
//          printf("smax:-%d",c);
//       }
//       else
//       {
//          printf("smax:-%d",a);
//       }
        
//    }
//    else
//    {
//       printf("smax = %d",b);
//    }
//    return 0;
// }





///// answer to the question no 17 (2nd method)

// #include<stdio.h>
// int main (){
// int a,b,c, max=0, smax=0;
// scanf("%d %d %d",&a,&b,&c);

// if(a>b)

// {
//    max=a; smax=b;
// }
// else{max=b; smax=a;};

// if (max>c)
// { smax=c;

// }
// else{
//    smax= max;
// }
// printf("%d",smax);

// return 0;


// }

/// answer to the question no 20 

// #include<stdio.h>
// int main (){
// int a,b,c,d, max=0, smax=0;
// scanf("%d %d %d %d",&a,&b,&c,&d);

// if(a>b)

// {
//    max=a; 
//    smax=b;
// }
//     else
//     {  max=b; 
//        smax=a;
//          }

// if (max>c){
//    if (smax<c)
//    { 
//       smax=c; 
//    }
// }
//    else
//    {
//       smax=max;
//        max=c;
//    }
//    if (max>d)
//       {
        
//       if (smax<d)
//       {
//           smax = d;
//       }
//       }
//       else 
//       {
//          smax=max;
//          max=d;
//       }
   

//       printf("%d",smax);
      
//       return 0;
//    }     




///// answer to the question no 18

// #include<stdio.h>
// int main()
// {
//    float basic_salary, gross_salary;
//    printf("enter the value of :-");
//    scanf("%f",&basic_salary);
//    float HRA=0,DA=0;
// ;

// if (basic_salary<=10000){
//    HRA = basic_salary *(20.0/100);
//    DA= basic_salary*(80.0/100);
//    gross_salary= basic_salary+HRA+DA;
// }

//  else if (basic_salary<=20000){
//   DA= basic_salary*(90.0/100);
//   HRA= basic_salary*(25.0/100);
//   gross_salary= basic_salary+HRA+DA;

// }

// else if (basic_salary>20000){
//     HRA = basic_salary*(30.0/100);
//     DA = basic_salary*(95.0/100);
//  gross_salary=basic_salary+HRA+DA;
// }

// printf("gross salary:-%.2f",gross_salary);

// return 0;


// }




///// answer to the question no 19 

// #include<stdio.h>
// int main ()
// {
//    float elecricity_unit;
//    printf("enter the value of electricity:-");
//    scanf("%f",&elecricity_unit);
//    float total_bill, total_after_tax_bill;
 

//    if (elecricity_unit<=50)
//    {
//       total_bill=elecricity_unit*0.50;
//       total_after_tax_bill=total_bill+total_bill*20/100;

//    }
//    else if (elecricity_unit<=150)
//    {
//       total_bill= 50*0.50+(elecricity_unit-50)*0.75;
//       total_after_tax_bill=total_bill+total_bill*20/100;
//    }
//   else if (elecricity_unit<=250)
//    {
//       total_bill=50*0.50+100*0.75+(elecricity_unit-150)*1.20;
//       total_after_tax_bill= total_bill+total_bill*20/100;
//    }
//    else if (elecricity_unit>250)
//    {
//       total_bill=(50*0.50)+(100*0.75)+(100*1.20)+(elecricity_unit-250)*1.50;
//       total_after_tax_bill=total_bill+total_bill*20/100;
   
//    }

//    printf ("total bill after addition :-%.2f",total_after_tax_bill);
//    return 0;

// }



///// answer to the question no 20

// #include<stdio.h>
// int main ()
// {
//    int a,b,c,d;
//    scanf("%d %d %d %d",&a,&b,&c,&d);

//    int max=0;
//    int smax=0;

//    if (a>b)
//    {
//       max=a; 
//       smax=b;
//    }

//    else
//    {
//       max=b;
//       smax=a;
//    }

//    if(max>c)
//    {
//       if (smax<c)
//       {
//          smax =c;
//       }
//    }
   
//    else
//    {
//          smax= max;
//          max= c;
//    }

//    if (max>d)
//    {
//       if(smax<d)
//       {
//           smax=d;
//       }
//    }
//      else 
//       {
//             smax=max;
//             max=d;
//       }
   
   

//    printf("Smax%d",smax);
//    return 0;

// }




//// answer to the question no 21

// #include<stdio.h>
// int main()

// {
//    int a,b,c,d,e,f,g,h;
//    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);

//    int max=0, smax=0;

// if(a>b)
// {
//    max=a;
//    smax=b;
// }
// else 
// {
//    max=b;
//    smax=a;
// }

// if(max>c)
// {
//    if(smax<c);
//    {
//       smax=c;
//    }
//    }
//    else 
//    { 
//       smax=max;
//       max=c;
//    }

//    if (max>d)
//    {
//       if (smax<d)

//       {
//          smax=d;
//       }
//    }
//    else
//     {
//       smax=max;
//       max=d;
//    }
//    if (max>e)
//    {
//       if (smax<e)
//       {
//          smax=e;
//       }
//    }
//    else 
//    {
//       smax=max;
//       max=e;
//    }

//    if(max>f)
//    {
//       if (smax<f)
//       {
//          smax=f;
//       }
//    }
//    else
//    {
//      smax=max;
//      max=f;
//    }
//    if (max>g)
//    {
//       if(smax<g)
//       {
//          smax=g;
//       }
//    }
//    else
//    {
//      smax=max;
//      max=g;
//    }

//    if(max>h)
//    {
//       if (smax<h)
//       {
//          smax=h;
//       }
//    }
//    else
//    {
//      smax=max;
//      max=h;
//    }

//    printf("smax:-%d",smax);
//    return 0;

//    }





////// answer to the question no 34

// #include<stdio.h>
// int main ()
// {
//  int a,b,c;
//  scanf("%d%d%d",&a,&b,&c);

//  if (a>b)
//     {
//       if (a>c)
//       {
//          printf("a is greater number");
//       }
//       else
//       {
//          printf("c is greatest number");
//       }
//     }
//     else if (b>c)
//     {
//       printf("b is greatest number");
//     }
//     else 
//     {
//       printf("c is greatest number");
//     }
//     return 0;
// }



//// answer to the question no 39

// #include<stdio.h>
// int main ()
// {
//    int a;
//    printf("enter the value of a:-");
//    scanf("%d",&a);

//    int b;
//    printf("enter the value of b:-");
//    scanf("%d",&b);

//    if (a==b)
//    {
//       printf("square");
//    }
//    else
//    {
//       printf("rectangle");
//    }

//    return 0;

// }


//// answer to the question no 40

// #include<stdio.h>
// int main ()
// {
//    int Selling_price;
//    printf("enter the value of selling price:-");
//    scanf("%d",&Selling_price);

//    int cost_price;
//    printf("enter the value of cost price:-");
//    scanf("%d",&cost_price);

//    int profit = Selling_price-cost_price;
//    int loss = cost_price-Selling_price;
//    int no_loss_no_profit = Selling_price-cost_price ;

//    if(Selling_price>cost_price)  
//    {
//       printf("profit:-%d",profit);
//    }

//    else if (cost_price>Selling_price)
//    {
//       printf("loss:-%d",loss);
//    }
//    else if (Selling_price==cost_price)
//    {
//       printf("no loss no profit:- %d",no_loss_no_profit);
//    }
//    return 0;

// }



/// answer to the question no 41

// #include<stdio.h>
// int main ()
// {
//    int n;
//    printf("enter the value of n:-");
//    scanf("%d",&n);

//    if (n==1000)
//    {
//       printf("it's the 4 digit smallest number:-%d",n);
//    }
//    else
//    {
//       printf("it's not 4 digit smallest numbere:-%d",n);
//    }

//    return 0;
// }

   

   ///// answer to the question no 42

   // #include<stdio.h>
   // int main ()
   // {
   //    int n;
   //    printf("enter the value of n:-");
   //    scanf("%d",&n);

   //    if (n==999)
   //    {
   //       printf ("it's the largest 3 digit number:-%d",n);
   //    }
   //    else
   //    {
   //       printf("it's not the largest 3 digit number:-%d",n);
   //    }

   //    return 0;
   // }



///// answer to the question no 43

// #include<stdio.h>
// int main ()
// {
//    int n;
//    printf("enter the value of n:-");
//    scanf("%d",&n);

//    if (n%7==0)
//    {
//       printf("its divisible by 7");
//    }

//    else
//    {
//      printf("its not divisible by 7");
//    }

//    return 0;

// }



//// answer to the question no 44

// #include<stdio.h>
// int main ()
// {
//    int n;
//    printf("enter the value of n:-");
//    scanf("%d",&n);

//    if (n%2==0)
//    {
//       printf("even number");
//    }
// else
// {
//    printf("odd number");
// }
// return 0;

// }



//// answer to the question no 45

// #include<stdio.h>
// int main ()
// {
//    int number;
//    printf("enter the value of n:-");
//    scanf("%d",&number);

//    int last_digit=number %10;

//    if(last_digit%3==0)
//    {
//       printf("yes");
//    }
//    else
//    {
//       printf("no");
//    }

//    return 0;
// }



//// answer to the question no 46

// #include<stdio.h>
// int main()
// {
//    int age;
//    printf("enter the value of age:-");
//    scanf("%d",&age);

//    if (age>=18)
//    {
//       printf("eligible for voting");
//    }

//    else
//    {
//       printf("not eligible for vote");
//    }

//    return 0;
// }



//// answer to the question no 47

// #include<stdio.h>
// int main()
// {
//    int number;
//    printf("enter the value of number:-");
//    scamf("%d",&number);

//    if (number%5==0)
//    {
//       printf("hello");
//    }
//    else
//    {
//       printf("bye");

//    }

//    return 0;

// }


///// 


//



