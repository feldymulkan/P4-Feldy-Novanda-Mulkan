#include <stdio.h>
int main()
{

printf("Kelompok 7 \n");
	int x[5],i;
	for(i=1;i<=5;i++)
	{
		printf("masukan nilai %i : ",i);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
	printf("nilai ke %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
