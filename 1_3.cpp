#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
	bool isPermutation(const string &a, const string &b);
	string result(bool value);

	/* data */
};

bool isPermutation(const string& a, const string &b) {
	string str_a(a);
	string str_b(b);

	sort(str_a.begin(),str_a.end());
	sort(str_b.begin(),str_b.end());

	if(str_a.length()!=str_b.length()){
		return false;
	}

	for(int i=0; i < str_a.length(); ++i) {
	if(str_a[i]!=str_b[i]) {
		return false;
	}
	}
	return true;

}


string result(bool value) {

if(value)
	return "True";
else
	return "False";


}

int main() {

	string inputA = "vetri";
	string inputB = "irvet";

	cout<<"Input strings are:" <<inputA<<" " <<inputB<<endl;
	// isPermutation(inputA,inputB);
	cout<<"Result:"<<result(isPermutation(inputA,inputB))<<endl;
	return 0;
}
