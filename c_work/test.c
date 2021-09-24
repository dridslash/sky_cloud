#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int f_atoi(char *c)
{
	int i=0;
	int signe=1;
	int result=0;
	while(c[i] ==' ' || c[i]=='\t')
	i++;
	while(c[i] == '-')
	{
		signe*=-1;
		i++;
		break;
	}
	while(c[i] >='0' && c[i] <='9')
	{
		result=(result*10)+(c[i]-'0');
		i++;
	}
	result*=signe;
	return result;
}

int main()
{
	char b[10]="  90  --1";
	printf("%d\n",f_atoi(b));
	
}
