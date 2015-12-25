

#include <stdio.h>

#define ARRAY_SIZE 10
static int arr[ARRAY_SIZE] = { 0 };

int main(int argc, char** argv)
{
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		arr[i] = i;
	}

	printf("size: %d\n", ARRAY_SIZE);

	return 0;
}



