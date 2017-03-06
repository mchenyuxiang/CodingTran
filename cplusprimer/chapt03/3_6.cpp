/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 14:36
 * Filename      : 3_6.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string line;
	cin >> line;
	for(auto &c:line){
		c = 'X';
	}
	cout << line <<endl;
}
