#include <unistd.h>
#include <stdio.h>
int main(int agc,char **agv)
{
	    int i=agc -1;
	        int j=0;
		    if (agc > 1)
			        {

					      while(i > 0)
						            {
								             j=0;
									              while(agv[i][j] !=  '\0')
											               {
													                    write(1,&agv[i][j],1);
															                 j++;
																	          }

										                write(1,"\n",1);
												          i--;
													        }



					          }

		        

}

