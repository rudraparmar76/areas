#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char shape[1000];
    int num1, num2;
    float result;
    printf("Enter the shape you wish to find the area of : ");
    scanf("%s", shape);
    if (strcmp(shape, "triangle") == 0)

    {
        printf("Enter the base of triangle : ");
        scanf("%d", &num1);
        printf("Enter the height of triangle : ");
        scanf("%d", &num2);
        result = 0.5 * num1 * num2;
        printf("The area of triangle is : %0.2f", result);
    }
    else if (strcmp(shape, "rectangle") == 0)

    {
        printf("Enter the length of rectangle : ");
        scanf("%d", &num1);
        printf("Enter the breadth of rectangle : ");
        scanf("%d", &num2);
        result = num1 * num2;
        printf("The area of rectangle is : %0.2f", result);
    }
    else if (strcmp(shape, "square") == 0)
    {
        printf("Enter the side of square : ");
        scanf("%d", &num1);
        result = num1 * num1;
        printf("The result of square is : %0.2f", result);
    }
    else if (strcmp(shape, "circle") == 0)
    {
        printf("Enter the radius of the circle : ");
        scanf("%d", &num1);
        result = 3.14 * num1 * num1;
        printf("The area of circle is : %0.2f", result);
    }
    else
    {
        printf("I'm sorry such shape's area doesn't exist in my code");
    }
    return 0;
}
