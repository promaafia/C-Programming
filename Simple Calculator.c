    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    //Written by chaitanya
     
    int main()
    {
     int input,a,b,result;
        char option;
     
    do{
     
        printf("calculator:\n");
     
        printf("\nEnter 1 for addition:\n ");
        printf("Enter 2 for subtraction:\n ");
        printf("Enter 3 for multiplication:\n ");
        printf("Enter 4 for division:\n ");

scanf("%d",&input);
        printf("Enter a number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
     switch(input){
            case 1 : result=a+b;
                     printf("The addition is : %d\n",result);
                     break;
case 2 : result=a-b;
         printf("The Substraction is : %d\n",result);
         break;
case 3 : result=a*b;
         printf("The Multiplication is : %d\n",result);
         break;
case 4 : result=a/b;
         printf("The division is : %d\n",result);
         break;
     
            default: printf("wrong input\n");
     
        }
        printf("Do you want to continue ? (y/n)\n");
        option=getche();
     
        }while(option=='y');
     
     return 0;
    }