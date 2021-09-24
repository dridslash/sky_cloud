#include <unistd.h>
#include <stdio.h>

void putstr(char *str)
{
	    int i =0;
	        while (str[i])
			    {
				            write(1,&str[i],1);
					            i++;
						        }
}
int is_there(char *str,char c)
{
	    int i=0;
	        while(str[i])
			    {
				            if(str[i]==c)
						            return (1);
					            i++;
						        }
		    return (0);
}

int main(int ac,char **av)
{
	    int i=0;
	        int j=0;
		    int k=0;
		        char backup[500]={0};
			    if(ac == 3)
				        {
						        i=1;
							       while(i < ac)
								              {
										                 j=0;
												            while (av[i][j])
														               {
																                      if(!(is_there(backup,av[i][j])))
																			                     {
																						                        backup[k]=av[i][j];
																									                   k++;
																											                  }
																		                     j++;
																				                    
																				                }
													               i++;
														              }
							              
							             putstr(backup);
								         }
}
