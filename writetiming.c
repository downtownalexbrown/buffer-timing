#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void) {
	int n;
	long buffsize = 1;
	char *buffer = malloc(buffsize);
	struct timeval start, end;

	FILE *fin, *fout;

	for (int i = 0; i <= 25; i++) {
		fin = fopen("shakespeare.txt", "r");
		fout = fopen("outshakespeare.txt", "w");

		gettimeofday(&start, NULL);
		buffsize = 1 << i;
		buffer = realloc(buffer, buffsize);

		while ((n = fread(buffer, buffsize, 1, fin)) > 0){
			if (fwrite(buffer, buffsize, 1, fout) != n)
				printf("error writing");
		}
		
		if (n < 0) // zero bytes should be remaining after reading
			printf("read error");

		gettimeofday(&end, NULL);
		printf("%i bytes took %f seconds\n", 
				buffsize, 
				(double) (end.tv_usec - start.tv_usec) / 1000000 +
         			(double) (end.tv_sec - start.tv_sec));
		
	}

	fclose(fin); fclose(fout);

	return 0;
}
