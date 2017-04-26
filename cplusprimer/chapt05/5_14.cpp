/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-04-26 11:28
 * Filename      : 5_14.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<string> v;
	string s;

	cout << "请输入个数" << endl;
	int n;
	cin >> n;
	int size = n;
	while(n --){
		cin >> s;
		v.push_back(s);
	}

	int a[size] = {1};
	int max = a[0];
	for (int i=1; i<(int)v.size(); i++){
	
		if(v[i-1].compare(v[i]) == 0){
			a[i]=a[i-1];
			a[i] ++;
		}else{
			a[i] ++;
		}
		if(a[i] > max){
			max = a[i];
		}
	}
	if(max == 1){
	
		cout << "没有出现过连续单词" << endl;
	}else{
	
		cout << max << endl;
	}
}
