#include <stdio.h>
int main() {
    float base, height,area;
    printf("Enter base of tringle: ");
    scanf("%f", &base);

    printf("Enter height of tringle: ");
    scanf("%f", &height);
    area=0.5*base*height;
    printf("Area= %.2f",area);
    retrun 0;
}