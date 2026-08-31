#include<stdio.h>
#include<math.h>

void area_square(float s);
void area_rectangle(float l,float b);
void area_circle(float r);

int main(){
    float s,l,b,r;
    printf("Enter the value of side:");
    scanf("%f", &s);

    printf("Enter the value of length and breadth:");
    scanf("%f %f", &l , &b);

    printf("Enter the value of Radius:");
    scanf("%f",&r);

    printf("Area of square is:");
    area_square(s);

    printf("\nArea of Rectangle is :");
    area_rectangle(l,b);

    printf("\nArea of circle is :");
    area_circle(r);

    return 0;
}

void area_square(float s){
    printf("%f",s*s);
}

void area_rectangle(float l,float b){
    printf("%f",l*b);
}

void area_circle(float r){
    printf("%f",3.142*pow(r,2));
}

