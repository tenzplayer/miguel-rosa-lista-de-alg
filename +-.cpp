#include <iostream>
using namespace std;
void n(int a,int b){
	if(a<b){
		cout<<b;
	}else{
		if(a>b){
			cout<<a;
		}
	}
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	n(a,b);
	return 0;
}