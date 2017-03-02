/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-02 15:26
 * Filename      : 2_17.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

using namespace std;

int main()
{

	int i, &ri = i;
	i = 5; ri = 10;
	cout << i << " " << ri << endl;
}
