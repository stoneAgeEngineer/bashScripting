#include <fcntl.h> 
#include <stdio.h>
#include <unistd.h>

int main(){
	int fd = open("/etc/passwd" , O_RDONLY);
		
	if(fd == -1){
		return 1; 
	}

	printf("fd = %d\n" , fd);
	
	int count = 100;
	char buff[count + 1];

	ssize_t n = read(fd , &buff , count); 

	buff[100] = '\0';

	printf(" data %s\n " , buff);

	close(fd);
	
	return 0;
}
