#include<stdio.h>
struct shape{
   float line;
   float radius;
   float areacircle;
   float areacylinder;
   float volumecylinder;
};
int main(){
   struct shape s;
   float pi = 3.14;
   printf("Enter a length of line or height : ");
   scanf("%f",&s.line);
   printf("Enter a length of radius : ");
   scanf("%f",&s.radius);
   s.areacircle = (float)pi*s.radius*s.radius;
   printf("Area of circular cross-section of cylinder : %.2f",s.areacircle);
   s.areacylinder = (float)2*pi*s.radius*s.line + 2 * s.areacircle;
   printf("Surface area of cylinder : %.2f", s.areacylinder);
   s.volumecylinder = s.areacircle*s.line;
   printf("volume of cylinder : %.2f", s.volumecylinder);
   return 0;
}
