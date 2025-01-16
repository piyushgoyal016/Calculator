#include <stdio.h>

int main()
{

    int a, b, choice;

    printf("enter your choice\n");
    printf("1.addition\n2. substraction\n3. multiplication\n4. divison\n");
    scanf("%d", &choice);

    if (choice > 4)
    {
        printf("the enter choice is not valid");
    }
    else
    {
        printf("enter the two integer");
        scanf("%d %d" , &a , &b) ;
    }

    switch (choice)
    {
    case 1:
        printf("%d + %d = %d", a, b, (a+b));
        break;
    case 2:
        printf("%d - %d = %d", a, b, (a-b));
        break;
    case 3:
        printf("%d * %d = %d", a, b, (a*b));
        break;
    case 4:
        if (b != 0)
        {
            printf("%d / %d = %d", a, b, (a/b));
        }
        else
        {
            printf("number can't divide by zero");
        }
        break;
    default:
        printf("you enter wrong choice") ;
    }
    return 0;
}