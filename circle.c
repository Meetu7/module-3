#include<stdio.h>
int main(){
    int a,b,c;
    float radius,rectangle,tringle,area,area1,length,width;
    printf("Enter tha area of radius ::");
    scanf("%f",&radius);

    printf("Enter the langth of rectangle ::");
    scanf("%f",&length);

    printf("Enter the width of rectangle ::");
    scanf("%f",&width);

    printf("Enter the area of tringle ::");
    scanf("%d %d",&a,&b);

    area1=3.14*(radius*radius);
    area=length * width;
    c=180-(a+b);

    printf("area of circle = %f\n",area1);
    printf("area of rectangle= %f\n",area);
    printf("Third angle of tringle= %d",c);

    return 0;
}