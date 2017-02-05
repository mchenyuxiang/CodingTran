/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-02-05 16:07
 * Filename      : secret_s.cc
 * Description   : 特殊的密码锁
 * *******************************************************/
#include <iostream>
#include <string>

using namespace std;

string s,t,fin;
int tmp=0,ans=1e9,n;

inline void flip(int i)
{
	s[i-1]=s[i-1]=='1'?'0':'1';
	s[i]=s[i]=='1'?'0':'1';
	if(i+1<n)
	  s[i+1]=s[i+1]=='1'?'0':'1';
}
int main()
{
	cin>>s>>fin;
	t=s;
	n=s.size();
	for(int i=1;i<n;i++){
		if(s[i-1]!=fin[i-1]){
			flip(i);
			tmp++;
		}
	}
	if(s[n-1] == fin[n-1]){
		ans = tmp;
	}

	tmp=1;
	s=t;
	s[0]=s[0]=='1'?'0':'1';
	s[1]=s[1]=='1'?'0':'1';
	for(int i=1; i<n; i++){
		if(s[i-1]!=fin[i-1]){
			flip(i);
			tmp++;
		}
	}
	if(s[n-1]==fin[n-1]){
		ans = min(ans,tmp);
	}
	if(ans == 1e9)
	  cout<<"impossible"<<endl;
	else
	  cout<<ans<<endl;
	return 0;
}
