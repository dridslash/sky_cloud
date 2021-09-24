nclude <unistd.h>
#include <stdio.h>
void ft_putay(int nb){
	int nb1=nb%10;
	int nb2=nb/10;
	char x=nb1+'0';
	char y=nb2+'0';
	write(1,&y,1);
	write(1,&x,1);
}
void ft_print_comb2(){
	int a=0;
	int b=0;
	while(a<99){
		 
		  b=a+1;
		      while(b<=99){
			              
			              if(b!=1){write(1," ",1);}
				              ft_putay(a);
					              write(1," ",1); 
						              ft_putay(b);
							              if(a!=98){write(1,",",1);}
								              b++;
									          }
		          a++;
	}
}
int main (){
	 
	ft_print_comb2();

}
