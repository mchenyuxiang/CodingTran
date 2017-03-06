/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 15:13
 * Filename      : 3_14.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	vector<int> vec;
	int line;
	while(cin >> line){
		vec.push_back(line);
	}
	for(int v:vec){
	
		cout << v << endl;
	}
}
