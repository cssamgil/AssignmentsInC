#include <stdio.h>
//ans 1
void bautifulcar() {
    printf("For that's a beautiful car!\n");
}
void nobody() {
    printf("\t\t\t\t\tWhich nobody can deny.\n");
}
void Q1() {
    bautifulcar();
    printf("\t");
    bautifulcar();
    printf("\t\t");
    bautifulcar();
    nobody();
}
//ans 2
#define gallonto 3.785
#define milesto 1.609
float getMPG(float miles, float gallons) {
    return miles / gallons;
}
float getliter(float mpg) {
    return (gallonto / (milesto / 100)) / mpg;
}
void Q2() {
    float miles;    // Miles traveled
    float gallons;  // Gallons of gas used
    printf("Enter miles traveled: ");
    scanf("%f", &miles);
    printf("Enter gallons of gas used: ");
    scanf("%f", &gallons);
    float mpg = getMPG(miles, gallons);
    printf("Miles Per Gallon: %.1f\n", mpg);
    float literPer100KM = getliter(mpg);
    printf("Liters Per 100 KM: %.2f\n", literPer100KM);
}
int main() {
    Q1();
    Q2();
    return 0;
}
