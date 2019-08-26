#include <iostream>
using namespace std;

int main()
{
	char ch1,ch2;
	const int size = 50;
	char array_1[size];
	cin.getline(array_1,size,'\n');
	cin >> ch1;
	cin >> ch2;
    for(int i=0; array_1[i] != '\0'; i++) {
		if(array_1[i] == ch1)
			array_1[i] = ch2;
	}
    cout<< array_1 << endl;

	return 0;
}
