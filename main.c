#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.1415926


int main(){
	int figure = 3;
	float x,a,b,c,r,P,S,Half_P;
	printf("Choose a figure: \n 1 - Circle \n 2 - Triangle \n ");
	scanf("%d", &figure);
	switch(figure){
	
	case 1:
		printf("Enter the starting point: \n");
		scanf("%f", &x);
		printf("Enter radius: \n");
		scanf("%f", &r);
		S = Pi * r * r;
		P = 2 * r * Pi;
		printf("Square circle = %.4f \n Perimeter circle = %.4f \n", S, P);
		break;
	case 2:
		printf("Enter the sides of the triangle: \n");
		scanf("%f %f %f",&a,&b,&c);
		if (c <= a + b){
		P = a + b + c;
		Half_P = P/2;
		S = (sqrt(Half_P * (Half_P - a) * (Half_P - b) * (Half_P - c)));
		printf("Square triangle = %.4f \nPerimeter triangle = %.4f \n", S, P);
		break;
	    }
		else{
		printf("Error!");
	}
}
	return 0;

} 
