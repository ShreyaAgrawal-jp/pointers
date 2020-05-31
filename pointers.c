#include <stdio.h>
int main()
{
    int a[3][3],i,j,(*ptr)[3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d],[%d]: ",i,j);
			scanf("%d",&a[i][j]);	
		}	
	}    
	ptr=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));	
		}	
		printf("\n\n");
	}    
}
