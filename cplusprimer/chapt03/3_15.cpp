/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 15:20
 * Filename      : 3_15.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	string s;
	vector<string> str_vector;
	while(cin >> s){
	
		str_vector.push_back(s);
	}
	for(string v:str_vector){
	
		cout << v << endl;
	}
}
