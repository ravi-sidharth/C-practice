////answer to the question no 6

// #include<stdio.h>
// int main()
// {
//     int m;
//     printf("enter the value of m:-");
//     scanf("%d",&m);

//     if (m>0)
//     {
//         printf("n=1");

//     }
//     else if(m==0)
//     {
//         printf("n=0");
//     }
//     else 
//     {
//         printf("n=-1");
//     }

//     return 0;
   
// }


//// answer to the question no 7

// #include<stdio.h>
// int main ()
// {
//     int height;
//     printf("enter the value of height:-");
//     scanf("%d",&height);

//     if (height<135)
//     {
//         printf("short");
//     }

//     else if(height<165)
//     {
//         printf("average height");
//     }

//     else if(height<195)
//     {
//         printf("tall");
//     }

//     else{
//         printf("abnormal height");
//     }

//     return 0;
    
// }

//// Answer to the question no 8


// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);

//     if (a>b)
//     {
//         if (a>c)
//         {
//             printf(" a is greatest number:%d",a);
//         }
//         else
//         {
//             printf("c is greatest number:-%d",c);

//         }
//     }
    
//     else if (b>c)
//     {
//         printf("b is greatest number:-%d",b);
//     }
//     else 
//     {
//         printf("c is greatest number:-%d",c);
//     }

//     return 0;

// }



//// answer to the question no 9;

// #include<stdio.h>
// int main ()
// {
//     int x;
//     printf("enter the value of x:-");
//     scanf("%d",&x);

//     int y;
//     printf("enter the value of y:-");
//     scanf("%d",&y);

//     if(x>0)
//     {
//         if (y>0)
//         {
//             printf ("first qaudrant:-%d %d",x,y);
//         }
//         else
//         {
//             printf("forth quadrant:-%d %d",x,y);

//         }
//     }
// else if (y<0)
// {
//     printf ("third quadrant:-%d %d",x,y);
// }
// else 
// {
//     printf ("second quadrant:-%d %d",x,y);
// }
// return 0;
// } 




//// answer to the question no 10

// #include<stdio.h>
// int main()
// {
//     int maths,physics,chemestry;
//     scanf("%d %d %d",&maths,&physics,&chemestry);

//     int total_marks=maths+physics+chemestry;

//     int total_marks_maths_and_physics=maths+physics;

//     if (maths>=65)
//     {
//         if (physics>=55)
//         {
//             if (chemestry>=50)
//             {
//                 if (total_marks>=190)
//                 {
//                     printf("the candidate eligible for addmision");
//                 }
//                 else if (total_marks_maths_and_physics>=140)
//                 {
//                     printf("the candidate eligible for addmision");
//                 }

//             }
//             else
//             {
//                 printf("the candidate not eligigble for addmision");
//              }
            
//         }
        
//         else
//         {
//             printf("the candidate not eligible for addmision");
//         }

//     }
    
//     else 
//     {
//         printf("not eligible for addmission");
//     }

//     return 0;
    
// }


//// answer to the question no 11

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     float a;
//     printf("enter the value of a:-");
//     scanf("%f",&a);

//     float b;
//     printf("enter the value of b:-");
//     scanf("%f",&b);

//     float c;
//     printf("enter the value of c:-");
//     scanf("%f",&c);

//     float Quadratic_root1=(-b+sqrt(b*b-4*a*c))/(2*a);

//     float Quadratic_root2=(-b-sqrt(b*b-4*a*c))/(2*a);

//     printf("first root:-%f\n",Quadratic_root1);
//     printf("second root:-%f\n",Quadratic_root2);

//     return 0;


// }



///Answer to the question no 12

// #include<stdio.h>
// int main ()
// {   
//     int marks_of_computer_application;
//     int roll_number;
//     char name_of_student[20];
//     int marks_of_physics;
//     int marks_of_chemistry;
//     //printf("enter the roll number, name of student,marks of computer applications, marks of physics,marks of chemistry 'enter the all these values in space-seprated form :- '");
//    // scanf("%d %s %d %d %d",&roll_number,name_of_student,&marks_of_computer_application,&marks_of_physics,&marks_of_chemistry);
//     printf("\nenter the name of student:- ");
//     scanf("%s",name_of_student);
//     printf("\nenter the marks:-");
//     scanf("%d",&marks_of_physics);
//     printf("\nenter the marks of chemestry:-");
//     scanf("%d",&marks_of_chemistry);   
//     printf("\nenter the marks of computer the application:-");
//     scanf("%d",&marks_of_computer_application);
//     printf("\nenter the roll number:-");
//     scanf("%d",&roll_number);

//     float total_marks=marks_of_chemistry+marks_of_computer_application+marks_of_physics;
//     //float percentage=total_marks/300*100;
//     float percentage =total_marks/300*100;
   
//    if (percentage>90)
//    {
//     printf("A grade");
//    }
//    else if(percentage>80)
//    {
//     printf("B grade");
//    }
//    else if (percentage>70)
//    {
//     printf("C grade ");
//    }
//    else if(percentage>60)
//    {
//     printf(" D Grade");
//    }

//    else
//    {
//     printf("E grade");

//    }
//    return 0;

//    }


////Answer to the question no 13
// #include<stdio.h>
// int main ()
// {
//     int temp;
//     printf("enter the value of temp:-");
//     scanf("%d",&temp);
    
//     if (temp<0)
//     {
//         printf("freezing weather");
//     }
//     else if(temp<10)
//     {
//         printf("very cold weather");
//     }
//     else if (temp<20)
//     {
//         printf("cold weather");
//     }
//     else if (temp<30)
//     {
//         printf("normal weather");
//     }
//     else if (temp<40)
//     {
//         printf("its hot");
//     }
//     else if (temp>=40)
//     {
//         printf("its very hot");
//     }

//     return 0;

//     }



//// Answer to the question no 14

// #include<stdio.h>
// int main ()
// {
//     int side1;
//     printf("enter the value of side1:-");
//     scanf("%d",&side1);

//     int side2;
//     printf("enter the value of side2:-");
//     scanf("%d",&side2);

//     int side3;
//     printf("enter the value of side3:-");
//     scanf("%d",&side3);

//     if (side1==side2)
//     {
//         if (side1==side3)
//         {
//             printf("equilateral triangle");
//         }
//         else
//         {
//             printf("isosceles triangle");
//         }
//     }
//     else if (side1==side3)
//     {
//         printf("isosceles triangle");
//     }
     

//     else if (side2==side3)
//     {
//         printf("isosceles ntriangle");
//     }
//     else 
//     {
//         printf("scalene triangle");
//     }

//      return 0;

// }


////Answer to the question no 15

// #include<stdio.h>
// int main ()ty
// {
//     int angle1,angle2,angle3;
//     scanf("%d %d %d",&angle1,&angle2,&angle3);

//    int sum_of_triangle=angle1+angle2+angle3;

// if (sum_of_triangle==180)
// {
//     printf("valid triangle");
// }
// else 
// {
//     printf("not valid triangle");
// }

// return 0;

// }


///// Answer to the question no 16

// #include<stdio.h>
// int main ()
// {
//     char  character;

//     printf("enter the value of character:-");
//     scanf("%c",&character);

//     printf("Asscii value: %d",character);

//     if (character>='a')
//     {
//         if(character<='z')
//         {
//             printf("alphabet");
//         }
//     }

//     else if (character>='A')
//     {
//         if (character<='Z')
//         {
//             printf("alphabet");
//         }
//     }

//     else if (character>='0')
//     {
//       if(character<='9')
//     {
//         printf("digit");
//     } 
//     }

//     else 
//     {
//         printf("special character");
//     }
    


// //printf("\n%c ,%c, %c",96,94,64);
//     return 0;

// }


///Answer to the question no 17

// #include<stdio.h>
// int main ()
// {
// char  alphabet;
//     printf("enter the value of alphabet:-");
//     scanf("%c",&alphabet);

//     if (alphabet=='a')
//     {
//         printf("vowel");
//     }
//     else if (alphabet=='e')
//     {
//         printf("vowel");
//     }
    
//     else if (alphabet=='i')
//     {
//         printf("vowel");
//     }

//     else if (alphabet=='o')
//     {
//         printf("vowel");
//     }
//     else if (alphabet=='u')
//     {
//         printf("vowel");
//     }
//     else 
//     {
//         printf("consonant");
//     }

//     return 0;


// }
 

////Answer to the question no 18

// #include<stdio.h>
// int main ()
// {
//     int sp,cp;
//     printf("enter the value of sp:- enter the value of cp:-");
//     scanf("%d %d",&sp,&cp);

//     int profit_loss=sp-cp;

//     if (sp>cp)
//     {
//         printf("profit:-%d",profit_loss);

//     }
//     else if (sp<cp)
//     {
//         printf("loss:-%d",profit_loss);
//     }
// else 
// {
//     printf ("no profit no loss:-%d",profit_loss);
// }

// return 0;

// }



////  Answer to the question no 20

// #include<stdio.h>
// int main()
// {
//   char grade;
//   printf("enter the value of grade:-");
//   scanf("%c",&grade);

//   if(grade=='E')
//   {
//     printf("excellent");
//   }
//   else if (grade=='V')
//   {
//     printf("very good");
//   }
//   else if (grade=='G')
//   {
//     printf("good");
//   }
//   else if (grade=='A')
//   {
//     printf("average");
//   }
//   else if (grade=='F')
//   {
//     printf("fail");
//   }
// else 
// {
//     printf("error");
// }

// return 0;

// }


//// Answer to the question no 21

// #include<stdio.h>
// int main ()
// {
//     int day;
//     printf("enter the value of day:-");
//     scanf("%d",&day);

//     if (day==1)
//     {
//         printf("monday");
//     }

//     else if (day==2)
//     {
//         printf("tuesday");
//     }

//    else if (day==3)
//    {
//     printf("wednesday");
//    }

//    else if (day==4)
//    {
//     printf("thursday");
//    }
//    else if (day==5)
//    {
//     printf("friday");
//    }
//    else if (day==6)
//    {
//     printf("saturday");
//    }
//    else if (day==7)
//    {
//     printf("sunday");
//    }
//    else 
//    {
//     printf("error");
//    }

//    return 0;

// }



//// Answer to the question no 19

// #include<stdio.h>
// int main ()
// {
//     int customer_id;
//     printf("enter the customer id:-");
//     scanf("%d",&customer_id);

//     char name[20];
//     printf("enter the name:-");
//     scanf("%s",name);

//     float unit,electricity_bill,total_electricity_bill;
//     printf("enter the value of unit:-");
//     scanf("%f",&unit);

//     if (unit<=199)
//     {
//         electricity_bill=unit*1.20;
//     }

//         else if (unit<400)
//         {
//             electricity_bill=unit*1.50 ;
//              }

//              else if (unit<600)
//              {
//                 electricity_bill=unit*1.80;
//              } 
//              else 
//              {
//                 electricity_bill=unit*2;
//              }

// if (electricity_bill>400)
// {
//             total_electricity_bill=electricity_bill+electricity_bill*15/100;
//              }
//              else 
//              {
//                 total_electricity_bill=electricity_bill;

//              }

//              if (total_electricity_bill<=100)
//              {
//                 total_electricity_bill=100;
//              }

//              else {total_electricity_bill=total_electricity_bill;}

//              printf("total electricity bill:-%f",total_electricity_bill);

//          return 0;


// }


///// Answer to the question no 17

// #include<stdio.h>
// int main ()
// {
//    char alphabet;
//    printf("enter the value of alphabet:-");
//    scanf("%c",&alphabet);

//    switch(alphabet)
//    {
//       case 'r': printf("vowel");
//                 break;
//       case 'e': printf("vowel");
//                 break;
//       case 'i': printf("vowel");
//                 break;
//       case 'o': printf("vowel");
//                 break;
//       case 'u': printf("vowel");
//                 break;

//       default: printf("consonant");          

//    }

// }



