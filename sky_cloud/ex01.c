#include <unistd.h>
#include <string.h>
void ft_putchar(char c){
	    write (1,&c,1);
}
int main(){
	char a='0';
	char b;
	char c;
	while(a<='7'){
		    b=a+1;
		       while(b<='8')
			          { 
					         c=b+1;
						     while(c<='9'){
							           
							           write(1,&a,1);
								         write(1,&b,1);
									       write(1,&c,1);
									             if(a!='7'){
											            write(1,",",1);
												           write(1," ",1);
													         }
										            c++;  
											        }
						         b++;  
							    }
		           a++;
	}
	return 0;
}
