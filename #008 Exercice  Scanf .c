#include <stdio.h>

int main() {
	
    char firstName[20]; 
    char lasteName[20]; 
    int age; 
    char phone[20];
    
    printf("give me your firstName : \n");
    scanf("%s",&firstName);
    
    printf("give me your lasteName : \n"); 
    scanf("%s",&lasteName); 
    
    printf("give me your age : \n");
    scanf("%d",&age);
    
    printf("give me your phone : \n"); 
    scanf("%s",&phone); 
    
    printf(" your first name is %s \n",firstName);
	printf(" your last name is %s \n",lasteName);
	printf("give me your age %d  \n",age); 
	printf(" your number phone %s  \n",phone);  
	
	return 0;
}
 
