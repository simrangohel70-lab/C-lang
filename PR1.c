#include <stdio.h>

int main(){

//que 1
    float celsius, fahrenheit;

    printf("Enter the Celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5 * celsius) + 32;

    printf("Temperature in Fahrenheit = %f\n", fahrenheit);

    return 0;
}
//que 2
#include <stdio.h>
int main(){
      int bs,hra,da,ta,gs;
      
      printf("enter the basesalary: ");
      scanf("%d",&bs);
      
      printf("enter the hra percentage: ");
      scanf("%d",&hra);
      
      printf("enter the da percentage: ");
      scanf("%d",&da);
      
      printf("enter the ta percentage: ");
      scanf("%d",&ta);
      
      gs=bs+(bs*hra/100)+(bs*da/100)+(bs*ta/100);
      printf("Gross salary: %d\n",gs);


    return 0;
}
//que 3

#include <stdio.h>

int main() {
    int angle1,angle2,angle3;
    
    printf("enter the first angle: ");
    scanf ("%d",&angle1);
    
    printf("enter the second angle: ");
    scanf("%d",&angle2);

    
    angle3=180 - (angle1+angle2);
    printf("third angle=%d",angle3);

    return 0;
}
