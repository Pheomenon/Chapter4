﻿#include <iostream>
#include<string>
using namespace std;

struct candyBar {
	string name;
	double weight;
	int calories;
};

int main()
{
	candyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},
		{"KO sds", 2.2, 342},
		{"dsa", 65.3, 3254}
	};
	cout << snack[0].name + "\n" 
		 << snack[1].weight << endl
		 << snack[2].calories;
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
