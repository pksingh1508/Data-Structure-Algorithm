#include<stdio.h>

int main()
{
    printf("Lets learn pointer in this videos.\n");
    int a =74;
    int* prta = &a;
    int *ptr2 = NULL;
    printf("The address of ptr2 is %x \n", ptr2);
    //printf("The value of ptr2 is %d \n", *ptr2);
    printf("The value of a is %d \n", a);
    printf("The value of ptra is %x \n", prta);
    printf("The address of a is %x \n", prta);
    printf("The address of pointer ptra is %x \n", &prta);
    printf("The value of a is %d \n", *prta);

    return 0;
}