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
	William* ui = new William;
	//现在的ui是一个指针，->主要用于类类型的指针访问类的成员,而.运算符主要用于类类型的对象访问类的成员。
	cout << "Enter the size: ";
	cin >> ui->size;
	cin.get();
	cout << "Enter the name: ";
	getline(cin, ui->name);
	cout << "Enter the weight: ";
	cin >> ui->weight;
	cout << "the name is " << ui->name << endl
		<< "the size is " << ui->size << endl
		<< "the weight is " << ui->weight;
}