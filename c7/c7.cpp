#include <iostream>
#include <string>
using namespace std;

struct William {
	string name;
	double size;
	double weight;
};

int main()
{
	string name0;
	double size0, weight0;
	cout << "Enter the name: ";
	getline(cin, name0);
	cout << "Enter the size: ";
	cin >> size0;
	cout << "Enter the weight: ";
	cin >> weight0;
	William userDefine{
		name0,
		size0,
		weight0
	};
	cout << "the name is " << userDefine.name << endl
		<< "the size is " << userDefine.size << endl
		<< "the weight is " << userDefine.weight;
}
