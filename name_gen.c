#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i;
	int fl = 1;
	int vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int consolant[20] = 
	{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q',
	 'r', 's', 't', 'v', 'w', 'x', 'z'};
	
	const unsigned short min_name_len = 5;
	const unsigned short max_name_len = 10;
	
	unsigned short name_len = min_name_len + rand() % 6;
	printf("Length: %hu\n", name_len);
	char name[max_name_len];
	
	name[0] = 'A' + rand() % 26;	//first letter
	
	for (i = 0; i < 6; i++)			//first letter is vowel?
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
	printf("Name: %s\n", name);
	return 0;
}
