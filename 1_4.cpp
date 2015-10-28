#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution
{
public:
	void replaceSpaces(char str[], int length);
};


void replaceSpaces(char str[], int length) {
	int spaceCounter=0;
	int newLength;//length + spaceCounter*2

	//count no. of spaces

	for(int i=0; i<length ; i++) {
		if(str[i] == ' ')
			spaceCounter++;
	}

	// determine new length
	newLength = length + spaceCounter*2;
	str[newLength] = '\0';

	//check from the end of the input 
	for(int i = length - 1 ; i>0 ; i--) {
		if(str[i] == ' ') {
			str[newLength - 1] = '0';
			str[newLength - 2] = '2';
			str[newLength - 3] = '%';
			newLength = newLength - 3;
		}

		else {
			str[newLength - 1] = str[i];
			newLength--;

		}


	}

} 

int main() {
	char str[] = "Vetri Selvi Vairamuthu";
	//int length = str.length();
	//auto newStr = make_unique<char []>(str.length()+3*2+1)
	cout<<"Input string:"<<str<<endl;
	replaceSpaces(str,strlen(str));
	cout<<"Replaced string:"<<str<<endl;

	return 0;
}
