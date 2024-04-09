#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		while (argv[i][j])
		{
			cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	cout << endl;
	return (0);
}