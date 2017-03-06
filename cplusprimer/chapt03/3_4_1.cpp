/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 14:06
 * Filename      : 3_4_1.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string line1,line2;
	cin >> line1 >> line2;
	if(line1.size() >= line2.size()){
	
		cout << line1 << endl;
	}else{
	
		cout << line2 << endl;
	}
}
