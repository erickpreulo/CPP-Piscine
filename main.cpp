#include <iostream>

using namespace std;

int		main() {
	
	char str[] = "--01289";
	int res;
	int neg;
	int i;

	i = 0;
	neg = 1;
	while (str[i] == '-') {
		neg *= -1;
		i++;
	}
	res = 0;
	while(str[i])
		res = res * 10 + (str[i++] - 48);
	
	cout << res * neg << endl;
}
