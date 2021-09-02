#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>


int value = 20;

int main(){
	pid_t pid;
	pid = fork();
	
	if (pid == 0){
		value +=5;
		return 0;
		
	}else if (pid > 0){
		wait(NULL);
		printf("value = %d", value);
		return 0;
	}else if (pid<0){
		value +=10;
		return 0;
	}
}

