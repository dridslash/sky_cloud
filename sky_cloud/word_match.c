#include <unistd.h>
#include <stdio.h>

void f_putstr(char  *str)
{
	    int i=0;
	        while(str[i])
			    {
				         write(1,&str[i],1);
					      i++;

					          }
}
int f_strlen(char *str)
{
	    int i=0;
	        while(str[i])
			    {
				            i++;
					        }
		    return i;
}

int main(int ac,char **av)
{
	    int k=0;
	        int j=0;
		    int i=0;
		        int c=0;
			    char backup[255]={0};
			        if(ac == 3)
					    {
						        while(av[2][i])
								    {
									            if(av[2][i] == av[1][j])
											            {
													                backup[k]=av[1][j];
															            j++;
																                k++;
																		        }
										            i++;
											        }
							    if(f_strlen(backup) == f_strlen(av[1]))
								        {
										        f_putstr(backup);
											        write(1,"\n",1);
												    }
							        }
				    else
					        {
							        write(1,"\n",1);
								    } 

}
