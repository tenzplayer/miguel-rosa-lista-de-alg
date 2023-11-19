#include <iostream>

using namespace std;


void calendario(int dia,int mes, int ano)
{
	
   switch(mes){
  case 1:
    cout<<dia<<" de janeiro de ";
    break;
  case 2:
    cout<<dia<<" de fevereiro de ";
    break;
  case 3:
    cout<<dia<<" de marco de ";
    break;
  case 4:
    cout<<dia<<" de abril de ";
    break;
  case 5:
    cout<<dia<<" de maio de ";
    break;
  case 6:
    cout<<dia<<" de junho de ";
    break;
  case 7:
    cout<<dia<<" de julho de ";
    break;
  case 8:
    cout<<dia<<" de agosto de ";
    break;
  case 9:
    cout<<dia<<" de setembro de ";
    break;
  case 10:
    cout<<dia<<" de outubro de ";
    break;
  case 11:
    cout<<dia<<" de novembro de ";
    break;
  case 12:
    cout<<dia<<" de dezembro de ";
    break;
  }


     




	
   switch(ano){
  case 20:
    cout<<"2020";
    break;
  case 21:
    cout<<"2021";
    break;
  case 22:
    cout<<"2022";
    break;
  case 23:
    cout<<"2023";
    break;
  case 24:
    cout<<"2024";
    break;
  case 25:
    cout<<"2025";
    break;
  case 26:
    cout<<"2026";
    break;
  case 27:
    cout<<"2027";
    break;
  case 28:
    cout<<"2028";
    break;
  case 29:
    cout<<"2029";
    break;
  case 30:
    cout<<"2030";
    break;
 
  }


     
}
int main(){
	int dia;
	int mes;
	int ano;
	cin>>dia;
	cin>>mes;
	cin>>ano;
	calendario(dia,mes,ano);
	return 0;
}