#include <stdio.h>
int main()
{
int i;
char huruf[5]={'F','E','L','D','Y'};
char nama[6]="FELDY";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",huruf[i]);
}
printf("\n"); printf("Array string = %s\n\n",nama);
return 0;
}
