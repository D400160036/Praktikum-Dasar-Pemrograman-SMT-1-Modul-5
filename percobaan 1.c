#include<stdio.h>
int main()
{
    int n[5];
    int i;
    n[0]=200;
    n[1]=250;
    n[2]=350;
    n[3]=100;
    n[4]=300;
    for(i=0; i<5; i++)
    {
        printf("Elemen ke-%d=%d\n",i,n[i]);
    }
    return 0;
}

