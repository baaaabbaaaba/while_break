#include <iostream>
using namespace std;

int main()
{
	int i = 0;

	while (i < 5)
	{
		if (i == 3)
		{
			break;
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}
