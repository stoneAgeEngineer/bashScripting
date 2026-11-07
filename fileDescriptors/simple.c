#include <fcntl.h> 
#include <stdio.h>
#include <unistd.h>

int main(){
	//int fd = open("/etc/passwd" , O_RDONLY);
		
	int fd = open("./create-file-using-fd" , O_WRONLY | O_CREAT  | O_TRUNC , 0644);

	if(fd == -1){
		perror("open");
		return 1; 
	}

	//printf("fd = %d\n" , fd);
	
	/* reading data from file using file descriptors
	int count = 100;
	char buff[count + 1];

	ssize_t n = read(fd , &buff , count); 

	// read() doesnt add 0 at end . 0 is the only end marker in C . strings dont store the lenght of bytes . Adding 0 manually so it stops reading string
	buff[100] = '\0';

	printf(" data %s\n " , buff);

	*/

	char buff[] = "Hello There\n";

	size_t count = sizeof (buff);

	ssize_t n = write(fd , buff , count );


	if(n != count){
		perror("write");
		return 10;
	}

	close(fd);
	
	return 0;
}
