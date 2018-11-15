#include <stdio.h>
/* Include other headers as needed */
int main()
{
	     int x,y;
	       scanf("%d %d",&x,&y);
	         x^=y^=x^=y;
		  printf("%d \n %d",x,y);
		  printf("\n");
		      /* Enter your code here. Read input from STDIN. Print output to STDOUT */
		      return 0;
}
