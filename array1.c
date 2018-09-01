#include<stdio.h>
	int* arr();
		int main()
		{
			int i;
			
			int *p=arr();
			
			for(i=0;i<5;i++)
			printf("\n %d",*(p+i));
			}


		int*  arr()
			{
			static	int a[]={1,3,4,56,6};
					return a;
				}
