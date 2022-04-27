#include "stdio.h"

int main()
    {
    int x;
    int num1;
    int num2;
    int num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("vvedite 1,chtobi slogit dva chisla,vvedite 2, chtobi vichest vtoroe is pervogo, vvedite 3, chtobi sravnit dva chisla i vivesti resultat:");
    scanf("%d",&x);
    switch(x)
        {
        case 1:
            printf("%d",num1+num2+num3);
            break;
        case 2:
            printf("%d",num1-num2-num3);
            break;
        case 3:
            if(num1+num2==num3)
                {
                printf("num1 + num2 = num3");
                }
            else if(num1+num2>num3)
                {
                printf("num1 + num2 > num3");
                }
            else
                {
                printf("num1 + num2 < num3");
                }
            break;

        default:
            printf("ne 1,ne 2,ne 3,nevernuy vvod");
            break;
        }
    }
