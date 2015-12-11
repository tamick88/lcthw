#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 25;
	while (i >= 0) {
		printf("%d", i);
		i--;
	}
	
	printf("\n");
	
	int j = 0;
	int k = 10;
	
	while (j < 11) {
		printf("page: %d \tWords left: ", j);
		while (k > 0) {
			printf("%d, ", k);
			k--;
		}
		printf("0\n");
		k = 10;
		j++;
	}
	
	return 0;
}
