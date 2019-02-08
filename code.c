#include<stdio.h>
int main()
 {
    int s,d;
    int au,mi,mc;
    int pr;
    char des;
    printf("Enter the source:\n");
    scanf("%d",&s);
    printf("Enter the destination:\n");
    scanf("%d",&d);
    if(s<d)
    {
        printf("Select the type of Vehicle:\n1.Auto\n2.Mini\n3.Micro\n");
        int c;
        scanf("%d",&c);
        switch(c)
         {
            case 1:
            au=(d-s)*5;
            printf("The Price is %d\n",au);
            pr=au;
             printf("Do you want to contine?\nY or N");
            scanf("%c",&des);
            if(des=='Y'||des=='y')
            {
                printf("Your ride will arrive in some time.\nThe Estimated cost is %d",pr);
            }else
            if(des=='N'||des=='n')
            {
                printf("Its Okay!Thank You");
            }
            break;
            case 2:
            mi=(d-s)*7;
            printf("The price is %d\n",mi);
            pr=mi;
             printf("Do you want to contine?\nY or N");
            scanf("%c",&des);
            if(des=='Y'||des=='y')
            {
                printf("Your ride will arrive in some time.\nThe Estimated cost is %d",pr);
            }else
            if(des=='N'||des=='n')
            {
                printf("Its Okay!Thank You");
            }
            break;
            case 3:
            mc=(d-s)*10;
            printf("The price is %d\n",mc);
            pr=mc;
             printf("Do you want to contine?\nY or N");
            scanf("%c",&des);
            if(des=='Y'||des=='y')
            {
                printf("Your ride will arrive in some time.\nThe Estimated cost is %d",pr);
            }else
            if(des=='N'||des=='n')
            {
                printf("Its Okay!Thank You");
            }
            break;
            default:
            break;
         }
    }
    return 0;
 }
