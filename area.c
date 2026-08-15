#include <stdio.h>
int main(){
    int radius;
    float pi=3.14,area,circumference;
    printf("enter the radius of circle");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("the area of circle is:%F",area);
    circumference=2*pi*radius;
    printf("\n the circumference of circle is=%f",circumference);
    return 0;
}
