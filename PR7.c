que 1 //

#include <stdio.h>

int main() {
   int dec,a,b,result;
   
   printf("1 Addition\n");
   printf("2 subtraction\n");
   printf("3 multiplication\n");
   printf("4 devision\n");
   printf("5 modulus\n");
   printf("0 exit\n");
   
   printf("enter a dicision number");
   scanf("%d",&dec);
   
   if(dec!=0){
       printf("enter the first number");
       scanf("%d",&a);
       
       printf("enter the second number");
       scanf("%d",&b);
   }
   
   switch(dec)
   {
    case 1:
        printf("you have choosen addition\n");
        result= a+b;
        printf("the result is: %d",result);
        break;
        
    case 2:
        printf("you have chosen subtraction\n");
        result= a-b;
        printf("the result is: %d",result);
        break;
    
    case 3:
        printf("you have chosen multiplication\n");
        result= a*b;
        printf("the result is: %d",result);
        break;
    
    case 4:
        printf("you have chosen division\n");
        if(b!=0)
            printf("the result is:%d",a/b);
        else
            printf("error:division is not allowed by 0");
        break;
    
    case 5:
       printf("you have chosen modulus\n");
       if(b!=0)
           printf("the result is:%d,a%b");
        else
           printf("error:modulus by zero is not allowed");
        break; 
        
    case 0:
        printf("exciting the program");
        break;
        
    default:
        printf("Invalid choice");
        
   }

    return 0;
}
