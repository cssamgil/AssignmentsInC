#include <stdio.h>
#include <math.h>
int main()
{
   char nameofCircle;
   double  radius, circumference, area, volume;
   printf("Enter the name of a circle\n");
   scanf("%c", &nameofCircle);
   printf("Enter the radius of a circle\n");
   scanf("%lf", &radius);
   area=3.1416*radius*radius;
   printf("The area of a circle is:%.2f\n", area);
   circumference=2*3.1416*radius;
   printf("The circumference of a circle is:%.2f\n", circumference);
   volume=1.3333*3.1416*radius*radius*radius;
   printf("The volume of the sphere made with that circle is:%.2f\n", volume);

   //second part//
   printf("Second part!\n");
   float beginning, ending, travelled,reimbursement;
   printf("Enter beginning odometer reading\n");
   scanf("%f", &beginning);
   printf("Enter ending odometer reading\n");
   scanf("%f", &ending);
   travelled= ending-beginning;
   printf("You travelled:%.1f miles. At $0.35 per miles\n", travelled);
   reimbursement= travelled*0.35;
   printf("Your reimbursement is $%.2f\n", reimbursement);
   return(0);
}
