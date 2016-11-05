#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int i;
	int fl = 1;
	int vowels[6] = {97, 101, 105, 111, 117, 121};
	int consolant[20] = 
	{98, 99, 100, 102, 103, 104, 106, 107, 108, 109, 110, 112, 113,
	 114, 115, 116, 118, 119, 120, 122};
	
	const unsigned short min_name_len = 5;
	const unsigned short max_name_len = 20;
	unsigned short name_len = min_name_len + rand() % 6;
	printf("%hu\n", name_len);
	char name[max_name_len];
	name[0] = 'A' + rand() % 26;
	for (i = 0; i < 6; i++)
	{
		if (vowels[i] == name[0])
			fl = 0;
	}
	for (i = 1; i < name_len; i++)
	{
		if (i % 2 == fl)
			name[i] = vowels[rand() % 6];
		else
			name[i] = consolant[rand() % 20];
	}
	name[i] = '\0';
	printf("%s\n", name);
	return 0;
}
