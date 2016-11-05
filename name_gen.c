#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int i;
	const unsigned short min_name_len = 5;
	const unsigned short max_name_len = 20;
	unsigned short name_len = min_name_len + rand() % 6;
	char name[max_name_len];
	name[0] = 'A' + rand() % 26;
	for (i = 1; i < name_len; i++)
	{
		name[i] = 'a' + rand() % 26;
	}
	name[i] = '\0';
	printf("%s\n", name);
	return 0;
}
