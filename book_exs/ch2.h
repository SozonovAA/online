#include <iostream>
#include "iomanip"
#include <ctype.h>
#include <math.h>
using namespace std ;
void task1(){
  float a; //число галонов
  float b;//число кубических футов

  cout  << "Введите число галонов:";
cin>> a;
b=a/7.481;
cout<<"Число кубических футов:"<<b;
}
void task2(){
  int a=1990;
  char t='.';
  cout<<(a++)<<setw(8)<<setfill('.')<<"135"<<endl;
  cout<<(a++)<<setw(8)<<"7290"<<endl;
  cout<<(a++)<<setw(8)<<"11300"<<endl;
  cout<<(a)<<setw(8)<<"16200"<<endl;
}
void task3(){
  int a=20;
  cout<<10<<endl<<(a--)<<endl<<a;
}
void task5(){
char a;
cout  << "Введите букву:";
cin>>a;
switch(islower(a)){
case 0: 
cout<<"Vvedena zaglavnaya bukva";
break;
default:
 cout<<"Vvedena strochnaya bukva";
break;
}
}
void task9(){
  int a[2], b[2], c[3]; //a0 -a;a1 - b; b0-c; b1-d; 
  char buff;
 //int a_i[2], b_i[2], c_i[2];
  cout<<"Vvedite drob' 1:"<<endl;
  cin>>a[0]>>buff>>a[1];
  cout<<"Vvedite drob' 2:"<<endl;
  cin>>b[0]>>buff>>b[1];
  // for(int i=0;i<2;i++){
  //   a_i[i]=static_cast<int>(a[i]);
  //   b_i[i]=static_cast<int>(b[i]);
  // }
  // cout<<a[0]*b[1]<<endl;
  // cout<<a[1]*b[0]<<endl;

  c[0]=a[0]*b[1]+a[1]*b[0];
  c[1]=a[1]*b[1];
  // for(int i=0; i < c[1]; i++){
  //   if(((c[0]%i)&&(c[1]%i))==0){
  //     c[0]=c[0]/i;
  //     c[1]=c[1]/i;
  //   }
  // }
    cout<<"Itogovaya drob' :"<<endl;
    cout<<static_cast<int>(c[0])<<"/"<<static_cast<int>(c[1]);

  }
  
