#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){

	int f, r;
	umask(0);
	
	f = open(argv[0],O_CREAT|O_TRUNC,0);
	
	if (f < 0){
		printf("Error!\n");
	}
	
	r = ssize_t read(f,buf,10000);
	
	while(r != 0){
	
		ssize_t write(f,buf,10000);
		
	}
	
	close(r);
	close(f);
	
	return 0;

}
