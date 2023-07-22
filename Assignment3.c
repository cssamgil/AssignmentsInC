#include <stdio.h>
//ans 1
void printSmile(){
   printf("Smile!");
}
void Q1() {
    printSmile();printSmile();printSmile();
   printf("\n"); printSmile();printSmile();
   printf("\n"); printSmile();
   printf("\n");
}
//ans 2
void Q2() {
   //beep
   printf("\a");
   printf("So excited that she shouted, “What a wonderful day full of sweets, flowers, and love! Wishing you all the best this Valentine's Day. ");
   printf("\n");
}
//ans 3
void two(){
   printf("two");
}
void one_three(){
   printf("one\n");
   two();
   printf("\nthree\n");
}
void Q3(){
   printf("starting now:\n");
   one_three();
   printf("done!");
   printf("\n");
}
//answer 4
   int x1,x2;
   int yy1,y2;
   int z1,z2;

   void Q4 () {
   #include <math.h>
   printf("Enter the coordinate of the first point (x:y:z) : ");
   scanf("%d%d%d",&x1,&yy1,&z1);

   printf("Enter the coordinate of the second point (x:y:z) 2 : ");
   scanf("%d%d%d",&x2,&y2,&z2);


   float dis = sqrt(pow((x2-x1),2)+
   pow((y2-yy1),2) +
   pow((z2-z1),2));

   printf("The distance is : %.2f\n",dis);
   }
//answer 5
  float massofwater = 3.0e-23;
	float gramsofwater = 950.;
	float quarts;

  void Q5 () {
  printf("Enter an amount of water (in quarts): ");
	scanf("%f", &quarts);
	printf("There are %f molecules in %f quarts of water.\n", quarts * gramsofwater / massofwater, quarts);
  }
int main() {
    Q1();
    Q2();
    Q3();
    Q4();
    Q5();
  
    return 0;
}
