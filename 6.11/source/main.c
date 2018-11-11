#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n[5] = { 20,10,15,5,50 }, g,o=0;
	for (int i = 0; i < 5 ; i++)
	{
		
		
		o = 0;
		for (int j = 0; j < 4; j++)
		{
			
			if (n[j] > n[j + 1])
			{
				g = n[j + 1];
				n[j + 1] = n[j];
				n[j] = g;	
				
			}
			else
			{
				o++;
			}						
		}
		if (o == 4)
		{
			break;
		}		
		printf("Loop %d :  ", i);
		for (int k = 0; k < 5; k++)
		{

			printf("%d,", n[k]);
		}
		printf("\n");
		
	}


	system("pause");
	return 0;
}



