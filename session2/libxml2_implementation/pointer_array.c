
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10

char* randomString();

int main()
{
	char* pointer_arr[N];
	for (int i = 0; i < N ; i++) {
		pointer_arr[i] = randomString();
	}

	for (int i = 0; i < N ; i++) {
		free(pointer_arr[i]);
	}
	return 0;
}

char* randomString()
{
	int n = rand() % 10 + 1;
	char* buffer = (char*)malloc(n + 1);
	buffer[n] = '\0';

	for (int i = 0; i < n; ++i) {
		buffer[i] = 'a' + rand() % 26;
	}
	return buffer;
}

