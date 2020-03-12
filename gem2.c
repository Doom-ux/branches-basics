


#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main()
{   
	int ox,oy,R;
	float P,S;
    char u;
     printf("Circle(");
     scanf("%d %d,%d%c",&ox,&oy,&R,&u);

     
     P = 2*M_PI*R;
     
     S = M_PI*R*R;
     
     printf("S=%.3f",S);
     printf("\n");
     printf("P=%.3f",P);
    
	return 0;
}
