// que 1
#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    
    (marks>=90) ? printf("you grade is 'A'") :
    (marks>=80) ? printf("your grsde is 'B'") :
    (marks>=70) ? printf("your grade is 'C'") :
    (marks>=60) ? printf("your grade is 'D'") :
    (marks>=50) ? printf("your grade is 'E'") : 
    printf("your grade is 'F'");
    
    
    
    return 0;
}
// que 2
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    
    switch((marks/10)*10){
        case 100:
        case 90:
        printf("your grade is:A.excellent work");
        break;
        case 80:
        printf("your grade is:B.well done");
        break;
        case 70:
        printf("your grade is:C.good job");
        break;
        case 60:
        printf("your grade is:D.you passed");
        break;
        case 50:
        printf("your grade is:E");
        break;
    }
    
    
    
    return 0;
}
// que 3
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    
    if(marks>=90){
        printf("your grade is A.excellent work!you are eligible for the next level");
    }
   
    else if(marks>=80){
        printf("your grade is B.good work!you are eligible for the next level");
    }
   
    else if(marks>=70){
        printf("your grade is C.you are eligible for the next level");
    }
   
    else if(marks>=60){
        printf("your grade is D.you are eligible for the next level");
    }
   
    else if(marks>=50){
        printf("your grade is F.please try again next time");
    }
   
    
    
    
    return 0;
}
