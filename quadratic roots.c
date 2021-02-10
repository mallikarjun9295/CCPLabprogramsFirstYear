#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float x, y, z, dis, root1, root2, real, img;
    printf("\n Enter the value of coefficient x, y and z: \n ");
    scanf("%f %f %f", &x, &y, &z);

    dis = y * y - 4 * x * z;

    if (dis > 0)
    {
    root1 = (-y + sqrt(dis)) / (2 * x);
    root2 = (-y + sqrt(dis)) / (2 * x);
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);
    }

    else if (dis == 0)
    {
        root1 = root2 = -y / (2 * x);
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);
    }

    else {
        real = -y / (2 * x);
        img = sqrt(-dis) / (2 * x);
        printf("\n value of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);
    }
    getch();
    }
