/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 15:47
 * Filename      : 3_23.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> vec;
	int si;
	for(int i=0;i<10;++i){
	
		cin >> si;
		vec.push_back(si);
	}

	for(auto it=vec.begin();it!=vec.end()&&!isspace(*it);++it){
	
		*it = *it * *it;
	}
	for(auto &i:vec){
	
		cout << i << endl;
	}
}
