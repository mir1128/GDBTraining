
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10

typedef struct 
{
	int		intMember;
	short	shortMember;
	int		len;
	char*	buffer;
}Sample;

Sample * createSamples(char* str, int mem1, short mem2);
void destorySample(Sample* sample);
char* randomString();

int main() 
{
	srand((unsigned)time(NULL));

	Sample* samples[N];
	for (int i = 0; i < N; ++i)	{
		samples[i] = createSamples(randomString(), 
			rand() % 1000, rand() % 1000);
	}

	for (int i = 0; i < N; i++)	{
		destorySample(samples[i]);
	}
	return 0;
}

Sample * createSamples(char* str, int mem1, short mem2) {
	Sample* sample = (Sample*)malloc(sizeof(Sample));
	sample->intMember = mem1;
	sample->shortMember = mem2;
	sample->len = strlen(str);
	sample->buffer = str;
	return sample;
}

void destorySample(Sample* sample)
{
	free(sample->buffer);
	free(sample);
	sample = NULL;
}

char* randomString() 
{
	int n = rand() % 10 + 1;
	char* buffer = (char*)malloc(n+1);
	buffer[n] = '\0';

	for (int i = 0; i < n; ++i)	{
		buffer[i] = 'a' + rand() % 26;
	}
	return buffer;
}

