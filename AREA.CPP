#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define pi 3.14
area_rec()
{
  clrscr();
  float l,b,ar;
  printf("\tTo Calculate the area of Rectangle");
  delay(500);
  printf("\n\tEnter a Length of Rectangle in cm : ");
  scanf("%f",&l);
  printf("\n\tEnter a Breadth of Rectangle in cm : ");
  scanf("%f",&b);
  ar=l*b;
  printf("\tArea of Rectangle = %f cm.sq",ar);
  getch();
};
area_cir()
{
  clrscr();
  float r,ac;
  printf("\tTo Calculate the area of Circle");
  delay(500);
  printf("\n\tEnter a Radius of circle in cm : ");
  scanf("%f",&r);
  ac=pi*r*r;
  printf("\tArea of Circle = %f cm.sq ",ac);
  getch();
};
area_sqr()
{
  clrscr();
  float a,as;
  printf("\tTo Calculate the area of Square");
  delay(500);
  printf("\n\tEnter a side of a square in cm : ");
  scanf("%f",&a);
  as=a*a;
  printf("\tArea of Square = %f cm.sq",as);
  getch();
};


void main()
{
 area_sqr();
 area_rec();
 area_cir();

}