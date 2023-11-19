#include<iostream>
using namespace std;
//valor final  em segundos//

void horario(int h, int min, int seg){
	int horas;
	h=h*3600;
	min=min*60;
	horas=h+min+seg;
	cout<<horas;
}
int main(){
	int h;
	int min;
	int seg;
	cin>>h;
	cin>>min;
	cin>>seg;
	horario(h,min,seg);
	cout<<" segundos";
	return 0;
}