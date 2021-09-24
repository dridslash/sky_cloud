#include <unistd.h>
void ft_putchar(char c){
	    write(1,&c,1);
}
void  ft(int nb){
	    if(nb>=0){
		            ft_putchar('P');
			        }else {
					        ft_putchar('N');
						    }
}
int main(){

	ft(-10);


}
