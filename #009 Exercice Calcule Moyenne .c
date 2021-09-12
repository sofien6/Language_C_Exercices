#include <stdio.h>

int main() {
	
    float algebre , analyse , algo , moyenne ; 
	
	printf(" note d'algebre : \n ");
	scanf("%f",&algebre);
	
	printf(" note d'analyse : \n ");
	scanf("%f",&analyse); 
	
	printf(" note d'algo : \n "); 
	scanf("%f",&algo); 
	
	moyenne = (algebre + analyse + algo ) / 3 ; 
	printf("moyenne = %f ", moyenne);   
  
	return 0;
}
 
