/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-07 15:49
 * Filename      : 3_32.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> vec;
	for(int i=0; i <10; i++){
	
		vec.push_back(i);
		cout<<vec[i]<<endl;
	}
}
