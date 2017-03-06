/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 14:09
 * Filename      : 3_5.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string line1,line2,line_all;
	cin >> line1 >> line2;
	line_all = line1 + line2;
	cout << line_all << endl;
	string line_black;
	line_black = line1 + " " + line2;
	cout << line_black << endl;

}
