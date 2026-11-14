#include <stdio.h>
int main()
{
    int choices;
    printf("-----kyc verification system----\n");
    printf("1.kyc verification of adhar card\n");
    printf("2.kyc verification of pan card\n");
    printf("3.kyc verification of driving license\n");
    printf("4.kyc verification of ration card\n");
    printf("5.kyc verification of appar id\n");
    printf("enter the choices from 1 to 5\n");
    scanf("%d", &choices);

    switch (choices)
    {
        case 1:
        printf("adhar card verified\n");
        break;

        case 2:
        printf("pan card verified\n");
        break;

        case 3:
        printf("driving license verified\n");
        break;

        case 4:
        printf("ratiion card verified\n");
        break;
        
        case 5:
        printf("appar id verified\n");
        break;

        default:
        printf("your verification is not done\n");
       
    }
    return 0;

}