#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	if(s.length()==0) return 0;
	for(int i = 1;i<s.length();i++){
		if(s[i] ==s[i-1]){
			s.erase(i,1);
			i--;
		}
	}
	cout<<s;
}
