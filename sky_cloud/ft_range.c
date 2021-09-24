#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min,int max)
{
	    
	    if(min >= max)
		        {
				        return (NULL);
					    }
	        int *range=(int*)malloc(sizeof(int)*(max-min));
		    int i=0;
		      while(min < max)
			        {
					      range[i]=min;
					            i++;
						          min++;
							    }
		        return (range);
}
int main()
{
	    int min =1;
	        int max =10;
		    int i=0;
		        int *rg=ft_range(min,max);
			   
			        
			            printf("%p\n",rg);
				                printf("%p \n",&min);
						         
}
