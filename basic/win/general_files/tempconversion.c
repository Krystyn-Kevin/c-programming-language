#include <stdio.h>

int main()
{
	int kel,fahr,cel;
	int lower,upper,step,count;
	
	lower=-273;
	upper=273;
	step=20;
	count=0;
	
	cel=lower;
	printf("celcius\t\tfarenheit\tkelvin\n");
	while (cel<=upper)
	{
		fahr=((9*cel)/5)+32;
		kel=273+cel;
		printf("%d\t\t%d\t\t%d\n",cel,fahr,kel);
		cel=cel+step;
		count+=1;
	}
	printf("\n%d\n",count);
}