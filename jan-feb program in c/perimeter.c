#include <stdio.h>
int main()
{
    int s1, s2, s3, perimeter;
    printf("Enter ther sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    perimeter = s1 + s2 + s3;
    printf("Perimeter of triangle= %d", perimeter);
    return 0;
}