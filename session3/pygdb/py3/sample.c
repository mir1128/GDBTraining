#include <stdlib.h>

typedef struct 
{
	int *p;
	int len;
}SubStruct;

typedef struct
{
	int length;
	SubStruct* data;
}Sample;

void createSubStruct(SubStruct* subStruct);
Sample* createSample(int len);

int main() {
	srand(9527);
	Sample* s = createSample(3);
	return 0;
}

void createSubStruct(SubStruct* subStruct)
{
	subStruct->len = rand() % 3 + 1;
	subStruct->p = malloc(subStruct->len);
	for (int i = 0; i < subStruct->len; ++i) {
		subStruct->p[i] = rand() % 10;
	}
}

Sample* createSample(int len)
{
	Sample* sample = (Sample*)malloc(sizeof(Sample));
	sample->length = len;
	sample->data = (SubStruct*)malloc(sizeof(SubStruct) * len);
	for (int i = 0; i < len; ++i)
	{
		createSubStruct(sample->data + i);
	}
	return sample;
}
