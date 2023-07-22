#include <stdio.h>
#include <math.h>
//// answer 1
void answer1()
{
printf(" Will Smith\n");
printf(" Will \n Smith \n");
printf("Will ");
printf("Smith\n");
printf("\n");
printf("\n");
printf("\n");
}

/// answer2
void answer2( int a)
{
printf("twice toes=%d\n",(2*a));
printf("square of toes=%d\n",(a*a));
printf("\n");
printf("\n");
printf("\n");
}

//// answer3
void answer3()
{
int F,C;
printf("please enter the value of temperatue in Fahrenheit");
scanf("%d",&F);
C=(F - 32) * 5 / 9;
printf("the value of temperature in degree Celcius=%d\n",C);
printf("\n");
printf("\n");
printf("\n");
}
////// answer4
void answer4()
{
int yard_l,yard_w,house_l,house_w;
int mow_area,mow_time;
int min,hour,sec;
printf("enter the length and width of the yard\n");
scanf("%d %d",&yard_l,&yard_w);
printf("enter the length and width of the house");
scanf("%d %d",&house_l,&house_w);
mow_area=((yard_w*yard_l)*3)-(house_w*house_l);
mow_time=mow_area/7;
sec=mow_time%60;
min=mow_time/60;
if(min >=60)
min=0;
hour=(mow_time/60)/60;
printf("the time required to mow the lawn(HH:MM:SS)=%d:%d:%d\n",hour,min,sec);
printf("\n");
printf("\n");
printf("\n");
}

////////// answer5
void answer5()
{
int h,m;
float t;
int output_temp;
printf("enter the time elapsed since power fail hh mm");
scanf("%d %d",&h,&m);
t=(float)h+(float)m/60;
printf(" t=%f",t);
output_temp=((4*t*t)/t+2)-20;
printf("the temperature of the frezer is %d\n",output_temp);
printf("\n");
printf("\n");
printf("\n");
}
int main()
{
int toes;
answer1();
answer2(10);
answer3();
answer4();
answer5();
return 0;
}
