// c9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char* name = new char[3];
	double* weight = new double[3];
	int* calories = new int[3];
	weight[0] = 2.3;
	weight[1] = 2.2;
	weight[2] = 65.3;
	calories[0] = 350;
	calories[1] = 342;
	calories[2] = 3254;
	name[0] = 'N';
	name[1] = 'N';
	name[2] = 'N';
	cout << "name: " << name[0] << " weight: " << weight[0] << " calories: " << calories[0] << endl;
	cout << "name: " << name[1] << " weight: " << weight[1] << " calories: " << calories[1] << endl;
	cout << "name: " << name[2] << " weight: " << weight[2] << " calories: " << calories[2] << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
