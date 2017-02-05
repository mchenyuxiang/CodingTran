/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-02-05 16:45
 * Filename      : secret_s_temp.cc
 * Description   : 模仿重写一遍
 * *******************************************************/
#include <iostream>
#include <string>

using namespace std;

string s,t,fin;
int ans=1e9,tmp=0,n;

inline void flip(int i)
{
	s[i-1]=s[i-1]=='1'?'0':'1';
	s[i]=s[i]=='1'?'0':'1';
	if(i+1<n){
		s[i+1]=s[i+1]=='1'?'0':'1';
	}
}

int main()
{
	cin >> s >> fin;
	t=s;
	n=s.size();

	for(int i=1; i < n; i++){
		if(s[i-1]!=fin[i-1]){
			flip(i);
			tmp++;
		}
	}

	if(s[n-1] == fin[n-1]){
		ans = tmp;
	}

	s=t;
	tmp=1;
	s[0]=s[0]=='1'?'0':'1';
	s[1]=s[1]=='1'?'0':'1';

	for(int i=1; i < n; i++){
		if(s[i-1]!=fin[i-1]){
			flip(i);
			tmp++;
		}
	}
	if(s[n-1]==fin[n-1]){
		ans = min(ans,tmp);	
	}

	if(ans == 1e9){
		cout << "impossible" << endl;
	}else{
		cout << ans << endl;
	}
}

