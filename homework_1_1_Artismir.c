#include <stdio.h>
#include <unistd.h>

int main() {
	int pid = fork();
	if(pid==0) {
	  printf("Child\n");
	 int i = 0;
	 while (i<5) {
		fork();
//		printf("created a child!\n"); 
		sleep(5);
		i++;
		
		 
		}
	} 
        else if(pid>0) {
		sleep(1);
		printf("Parent\n");
		}

		else { 
		  printf("Error in fork\n");
		} 
		 	
//	printf("Hello World!\n");
//	sleep(30);
	return 0;
} 

